#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0)); // Zufall starten
    int secretNumber = rand() % 100 + 1; // 1-100
    int guess;
    int attempts = 0;

    cout << "=== NUMBER GUESSING GAME ===" << endl;
    cout << "Ich habe eine Zahl zwischen 1 und 100 gedacht." << endl;

    do {
        cout << "Dein Tipp: ";
        cin >> guess;
        attempts++;

        if (guess > secretNumber) {
            cout << "Zu hoch!" << endl;
        } else if (guess < secretNumber) {
            cout << "Zu niedrig!" << endl;
        } else {
            cout << "Richtig! Du hast es in " << attempts << " Versuchen geschafft!" << endl;
        }

    } while (guess != secretNumber);

    cout << "Spiel beendet." << endl;
    return 0;
}
