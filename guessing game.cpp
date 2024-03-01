#include <iostream>
#include <vector>
#include <cstdlib> // For srand() and rand()
#include <ctime>   // For time()

using namespace std;

// Function to display the boxes
void displayBoxes(int height, int width) {
    cout << "Here is the box that contains the  numbers: " << endl;
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            if (i == 0 || i == height - 1 || j == 0 || j == width - 1) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    cout << endl;
}

int main() {
    srand(static_cast<unsigned int>(time(0))); // Seed the random number generator

    const int numBoxes = 5;
    const int boxSize = 5;
    int height = 5; // Height of the boxes
    int width = 5;  // Width of the boxes

    displayBoxes(height, width);

    // Generate a random number between 0 and 15
    int secretNumber = rand() % 16; // Generates a random number between 0 and 15

    // Game loop
    const int maxTrials = 3;
    for (int trial = 1; trial <= maxTrials; ++trial) {
        cout << "\nTrial " << trial << "/" << maxTrials << ": Guess a number between 0 and 15: ";
        int guess;
        cin >> guess;

        if (guess == secretNumber) {
            cout << "Congratulations! You found the number!" << endl;
            break;
        } else {
            cout << "Sorry, the number is not in any of the boxes." << endl;
        }
    }

    cout << "\nGame over! Thanks for playing." << endl;

    return 0;
}
