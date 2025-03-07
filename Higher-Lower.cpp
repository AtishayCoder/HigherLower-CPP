#include <iostream>
using namespace std;

int main() {
    int rand_no = 1 + (rand() % 100);
    cout << "We have generated a random number from 1-100. You have to guess it with our hints. You have 5 lives." << endl;

    bool gameOver = false;
    int lives = 5;
    while (!gameOver) {
        
        if (lives == 0) {
            cout << "You lost all your lives! GAME OVER.";
            exit(1);
        }

        int g;

        cout << "Your guess: ";
        cin >> g;

        if (g == rand_no) {
            cout << "Congrats! You won! The number was " << rand_no;
            gameOver = true;
        }
        else if (g > rand_no) {
            cout << "You guessed higher than the actual number." << endl;
            --lives;
        }
        else {
            cout << "You guessed lower than the actual number." << endl;
            --lives;
        }
    }
}
