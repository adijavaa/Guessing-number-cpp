#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int random() {
    srand(time(0));
    return rand() % 10 + 1;
}

void guessNum(int& num, int p) {
    if (p == num) {
        cout << "Your Guess is Correct. The number is: " << num << endl;
        num =random();
    } else if (p > num) {
        cout << "Your Guess is too high." << endl;

    } else {
        cout << "Your Guess is too low." << endl;
    }
}

int main() {
    int myGuess, autonum;
    bool start = true;

    autonum = random();

    while (start) {
        cout << "Enter your guess between 1 to 10. If you want to escape, press 0: ";
        cin >> myGuess;

        if (myGuess == 0) {
            cout << "Do you want to play again? If so, the correct number was: " << autonum << endl;
            start = false;
        } else {
            guessNum(autonum, myGuess);

        }
    }

    return 0;
}
