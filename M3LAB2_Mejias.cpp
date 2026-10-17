// CSC 134
// M3LAB2
// Andrea Mejias
// 10/13/2026

#include <iostream>
#include <limits>
using namespace std;

int main() {

    // Declare variables
    float numericalgrade;

    // Input - Ask user to enter numerical grade
    cout << "Welcome to the Grade Converter Program!" << endl;
    cout << "Please enter your numerical grade: ";

    // Validate that the input is a number
    if (!(cin >> numericalgrade)) {
        cerr << "Invalid input. Please enter a number between 0 and 100." << endl;
        return 1;
    }

    // Reject letters as well
    if (cin.peek() != '\n' && cin.peek() != EOF) {
        cerr << "Invalid input. Please enter only a number." << endl;
        return 1;
    }

    // Display - Convert the inputted grade into a letter grade
    if (numericalgrade < 0 || numericalgrade > 100) {
        cerr << "Invalid number. Please enter a grade between 0 and 100." << endl;
        return 1;
    }
    else if (numericalgrade >= 90) {
        cout << "Your letter grade is: A" << endl;
    }
    else if (numericalgrade >= 80) {
        cout << "Your letter grade is: B" << endl;
    }
    else if (numericalgrade >= 70) {
        cout << "Your letter grade is: C" << endl;
    }
    else if (numericalgrade >= 60) {
        cout << "Your letter grade is: D" << endl;
    }
    else {
        cout << "Your letter grade is: F" << endl;
    }

    return 0;
}