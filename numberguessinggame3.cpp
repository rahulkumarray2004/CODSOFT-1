#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

struct Game {
    int SecretNumber;
    int Guess;
    int Attempts;

    void Initialize_the_number() {
        cout << "Welcome to the Number Guessing Game!" << endl;
        cout << "Enter guess limit: ";
    int lim; std::cin >> lim;
    srand( time(0) ^ clock() );
        SecretNumber = rand() % lim;
        Guess = 0;
        Attempts = 0;
    }
    void Play_with_number() {
        do {
            cout << "Guess any number you want: ";
            cin >> Guess;
            if (Guess < 1 || Guess > 100000000) {
                cout << "Please enter a valid guess between 1 and 100000000." << endl;
            } else {
                Attempts++;
 if (Guess < SecretNumber) {
                    cout << "Too low! Try again." << endl;
                } else if (Guess > SecretNumber) {
                    cout << "Too high! Try again." << endl;
                } else {
                    cout << "Congratulations! You guessed the number in " << Attempts << " Attempts." << endl;
                }
            }
        } while (Guess != SecretNumber);
    }
};
int main() {
    Game numberGame;
    numberGame.Initialize_the_number();
    numberGame.Play_with_number();
    return 0;
} 