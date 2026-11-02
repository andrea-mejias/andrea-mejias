// CSC 134 
// M4HW1 - Gold
// Andrea Mejias
// 10/25/2026

#include <iostream>
using namespace std;

int main() {
    
    // Declare variables
    int input;

    // Input - Ask user for a number
    cout << "What number do you want to use as a multiple for a table? " << endl;
    cin >> input;

    // Display - Loop 1 - Show the times table by 5 once
    cout << input << " Times Table (1 to " << input << ") " << endl;
    int i = 1;
    while (i <= 5) {
        cout << input << " x " << i << " = " << i * 5 << endl;
        i++;
    }

    // Ask user to enter a valid number
    cout << "\nEnter a number between 1 and 12: ";
    cin >> input;

    while (input < 1 || input > 12) {
        cout << "Invalid number! Enter a number between 1 and 12: ";
        cin >> input;
    }

    // Display - Loop 2 - Display the user's chosen times table by 12
    cout << "\n" << input << " Times Table (1 to 12)" << endl;
    int j = 1;
    while (j <= 12) {
        cout << input << " x " << j << " = " << j * input << endl;
        j++;
    }
    cout << "Thanks for using the Times Table Program! " << endl;

    return 0;
}