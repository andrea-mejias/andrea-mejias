// CSC 134 
// M4HW1 - Gold
// Andrea Mejias
// 10/25/2026

#include <iostream>
using namespace std;

int main() {
    int input;

    // ── Loop 1: Display the 5× table (1–5) until a valid number (1–12) is entered ──
    while (true) {
        cout << "Five Times Table (1 to 5)" << endl;
        for (int i = 1; i <= 5; i++) {
            cout << i << " x 5 = " << i * 5 << endl;
        }

        cout << "Enter a number between 1 and 12 to continue: ";
        cin >> input;

        if (input >= 1 && input <= 12) {
            break;   // exit Loop 1
        }

        cout << "Invalid input! Please enter a valid number between 1 and 12." << endl;
    }

    // Loop 2: Display the ×12 table (1–12)
    while (true) {
        cout << "\n=== Times Table x 12 (1 to 12) ===" << endl;
        for (int i = 1; i <= 12; i++) {
            cout << i << " x 12 = " << i * 12 << endl;
        }

        int check;
        cout << "\nEnter " << input << " again to exit the program: ";
        cin >> check;

        if (check == input) {
            cout << "\nYou entered " << input << ". " << "Exiting the program. Goodbye!" << endl;
            break;   // valid — exit Loop 2 and end the program
        }

        cout << "Invalid input! Please enter a valid number between 1 and 12." << endl;
    }

    return 0;
}