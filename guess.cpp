#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
 
int main() {
    srand(time(0));
    char playAgain;
    do {
        int randomNumber = rand() % 100 + 1;
        int guess;
        int attempts = 0;
        int score = 100;
        cout << "Welcome to the Number Guessing Game!" << endl;
        cout << "Try to guess the number between 1 and 100" << endl;
        do {
            cout << "Enter your guess: ";
            cin >> guess;
            attempts++;
            if (guess > randomNumber) {
                cout << "Too high! Try again" << endl;
                score -= 10;
            } else if (guess < randomNumber) {
                cout << "Too low! Try again" << endl;
                score -= 10;
            } else {
                cout << "You guessed the number " << randomNumber << " in " << attempts << " attempts!" << endl;
                cout << "Your score is: " << score << endl;
            }
        } while (guess != randomNumber && score > 0);
        if (score == 0) {
            cout << "Game over!" << endl;
        }
        cout << "Do you want to play again? (y/n): ";
        cin >> playAgain;
    } while (playAgain == 'y' || playAgain == 'Y');
    cout << "Thank you for playing!" << endl;
    return 0;
}

