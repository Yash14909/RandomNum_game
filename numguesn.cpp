// numguesn.cpp
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));
    int secretNumber = rand() % 100 + 1;
    int guess;
    int attempts = 0;
    const int maxAttempts = 10;

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "You have to guess a number between 1 and 100." << endl;
    cout << "You have " << maxAttempts << " attempts to guess it right." << endl;

    while (attempts < maxAttempts) {
        cout << "\nEnter your guess: ";
        cin >> guess;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Invalid input. Please enter a number." << endl;
            continue;
        }

        attempts++;

        if (guess == secretNumber) {
            cout << "Congratulations! You guessed the number in " << attempts << " attempts." << endl;
            break;
        } else if (guess < secretNumber) {
            cout << "Too low! Try again." << endl;
        } else {
            cout << "Too high! Try again." << endl;
        }
    }

    if (attempts == maxAttempts) {
        cout << "Sorry! You've used all your attempts. The number was " << secretNumber << "." << endl;
    }

    return 0;
}
