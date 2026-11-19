// CSC 134
// M5HW - Gold
// Andrea Mejias
// 11/12/2026

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int question1() {

    // Declare variables
    string month1, month2, month3;
    double rainfall1, rainfall2, rainfall3;

    // Input rainfalls for each month
    cout << "Enter the first month: ";
    cin >> month1;
    cout << "Enter rainfall for " << month1 << ": ";
    cin >> rainfall1;

    cout << "Enter the second month: ";
    cin >> month2;
    cout << "Enter rainfall for " << month2 << ": ";
    cin >> rainfall2;

    cout << "Enter the third month: ";
    cin >> month3;
    cout << "Enter rainfall for " << month3 << ": ";
    cin >> rainfall3;

    // Calculate average rainfall from all inputs
    double averagerainfall = (rainfall1 + rainfall2 + rainfall3) / 3.0;

    // Display average rainfall after calculation
    cout << fixed << setprecision(2);
    cout << "The average rainfall for " << month1 << ", " << month2 << ", and " << month3
         << " is " << averagerainfall << " inches." << endl;

    return 0; // no errors
}

int question2() {

    // Declare variables
    double width, length, height;

    // Input information of the hyper-rectangle
    cout << "Enter the width of the hyper-rectangle: ";
    cin >> width;
    while (width <= 0) {
        cout << "ERROR - Width must be greater than zero." << endl;
        cout << "Enter the width of the hyper-rectangle: ";
        cin >> width;
    }

    cout << "Enter the length of the hyper-rectangle: ";
    cin >> length;
    while (length <= 0) {
        cout << "ERROR - Length must be greater than zero." << endl;
        cout << "Enter the length of the hyper-rectangle: ";
        cin >> length;
    }

    cout << "Enter the height of the hyper-rectangle: ";
    cin >> height;
    while (height <= 0) {
        cout << "ERROR - Height must be greater than zero." << endl;
        cout << "Enter the height of the hyper-rectangle: ";
        cin >> height;
    }

    // Calculate the volume of the hyper-rectangle
    double volume = width * length * height;

    // Display the volume of the hyper-rectangle
    cout << "The volume of the hyper-rectangle is " << volume << endl;

    return 0; // No errors
}

int question3() {
    
    // Declare variables
    int number;

    // Input one number for conversion
    cout << "Enter a number (1 - 10): ";
    cin >> number;
    while (number < 1 || number > 10) {
        cout << "ERROR - Number must be between 1 and 10." << endl;
        cout << "Enter a number (1 - 10): ";
        cin >> number;
    }

    // Display Roman numeral for input using a switch statement
    cout << "The Roman numeral version of " << number << " is ";
    switch (number) {
        case 1:  cout << "I";    break;
        case 2:  cout << "II";   break;
        case 3:  cout << "III";  break;
        case 4:  cout << "IV";   break;
        case 5:  cout << "V";    break;
        case 6:  cout << "VI";   break;
        case 7:  cout << "VII";  break;
        case 8:  cout << "VIII"; break;
        case 9:  cout << "IX";   break;
        case 10: cout << "X";    break;
    }
    cout << "." << endl;

    return 0; // No errors
}

int question4() {
    
}

int question5() {
    
}

int question6() {
    
}