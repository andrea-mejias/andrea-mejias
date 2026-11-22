// CSC 134
// M5HW - Gold
// Andrea Mejias
// 11/12/2026

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;

// Declare function prototypes
int mainmenu();
int question1();
int question2();
int question3();
int question4();
int question5();

// Question 4 - Declare function definition
void circle() {
    
    // Declare variables
    const double PI = 3.14159265358979;
    double radius;

    // Input - Ask user for radius of the circle
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    // Input Validation
    while (radius <= 0) {
        cout << "ERROR - Radius must be greater than zero." << endl;
        cout << "Enter the radius of the circle: ";
        cin >> radius;
    }

    // Calculate - Determine the area of the circle
    double area = PI * radius * radius;

    // Display - Show the results
    cout << fixed << setprecision(2);
    cout << "The area of the circle is " << area << endl;

    // Return to Geometry Menu
    question4();
}

void rectangle() {

    // Declare variables
    double width, length;

    // Input - Ask user for information of the rectangle
    cout << "Enter the width of the rectangle: ";
    cin >> width;
    while (width <= 0) {
        cout << "ERROR - Width must be greater than zero." << endl;
        cout << "Enter the width of the rectangle: ";
        cin >> width;
    }
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    while (length <= 0) {
        cout << "ERROR - Length must be greater than zero." << endl;
        cout << "Enter the length of the rectangle: ";
        cin >> length;
    }

    // Calculate - Use input to determine the area
    double area = width * length;

    // Display - Show the results of the calculation
    cout << fixed << setprecision(2);
    cout << "The area of the rectangle is " << area << endl;

    // Return to Geometry Menu
    question4();
}

void triangle() {

    // Declare variables
    double base, height;

    // Input - Ask user for information of the triangle
    cout << "Enter the base of the triangle: ";
    cin >> base;
    while (base <= 0) {
        cout << "ERROR - Base must be greater than zero." << endl;
        cout << "Enter the base of the triangle: ";
        cin >> base;
    }
    cout << "Enter the height of the triangle: ";
    cin >> height;
    while (height <= 0) {
        cout << "ERROR - Height must be greater than zero." << endl;
        cout << "Enter the height of the triangle: ";
        cin >> height;
    }

    // Calculate - Determine the area of the triangle
    double area = 0.5 * base * height;

    // Display - Show the results
    cout << fixed << setprecision(2);
    cout << "The area of the triangle is " << area << endl;

    // Return to Geometry Menu
    question4();
}

// Display the main menu
int mainmenu() {

    // Declare variables
    int mainmenuinput;

    // Display the main menu
    cout << "CSC-134 C++ Main Menu" << endl;
    cout << "1. Average Rainfall Calculator" << endl;
    cout << "2. Hyperrectangle Volume Calculator" << endl;
    cout << "3. Roman Numerals Converter" << endl;
    cout << "4. Geometry Calculator" << endl;
    cout << "5. Vehicle Distance Calculator" << endl;
    cout << "6. Exit" << endl;
    cout << "Choose one of the main menu options from 1 to 6." << endl;
    cout << "Input number here: ";
    cin >> mainmenuinput;

    // Use if else statements to determine the input
    if (mainmenuinput == 1) {
        question1(); 
    } else if (mainmenuinput == 2) {
        question2();
    } else if (mainmenuinput == 3) {
        question3();
    } else if (mainmenuinput == 4) {
        question4();
    } else if (mainmenuinput == 5) {
        question5();
    } else if (mainmenuinput == 6) {
        cout << "Quitting program... Thank you for using the C++ program!" << endl;
        return 0; // No errors
    } else {
        cout << "That is not a valid choice. Please input a number from 1-6." << endl;
        cin.ignore(); // Erase input
        mainmenu(); // Try again   
    }

    return 0; // no errors
}

// Start the program
int main() {
    mainmenu();
    return 0;
}

int question1() {
    
    // Declare variables
    string month1, month2, month3;
    double rainfall1, rainfall2, rainfall3;

    // Input - Ask user for rainfall on each month
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

    // Calculate - Determine the average rainfall by all three rainfalls
    double averagerainfall = (rainfall1 + rainfall2 + rainfall3) / 3.0;

    // Display - Show the average rainfall for the three months
    cout << fixed << setprecision(2);
    cout << "The average rainfall for " << month1 << ", " << month2 << ", and " << month3
         << " is " << averagerainfall << " inches." << endl;

    // Return to main menu
    mainmenu();
    return 0; // No errors
}

int question2() {

    // Declare variables
    double width, length, height;

    // Input - Ask user for information of the hyper-rectangle
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

    // Calculate - Determine the volume by the inputted information
    double volume = width * length * height;

    // Display - Show the volume of the hyper-rectangle
    cout << "The volume of the hyper-rectangle is " << volume << endl;

    // Return to main menu
    mainmenu();
    return 0; // No errors
}

int question3() {

    int number;

    cout << "Enter a number (1 - 10): ";
    cin >> number;
    while (number < 1 || number > 10) {
        cout << "ERROR - Number must be between 1 and 10." << endl;
        cout << "Enter a number (1 - 10): ";
        cin >> number;
    }

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

    // Return to main menu
    mainmenu();
    return 0; // No errors
}

int question4() {

    // Declare variables
    int geometrymenuinput;

    // Display main menu
    cout << "Geometry Calculator" << endl;
    cout << "1. Calculate the area of a Circle" << endl;
    cout << "2. Calculate the area of a Rectangle" << endl;
    cout << "3. Calculate the area of a Triangle" << endl;
    cout << "4. Return to Main Menu" << endl;
    cout << "Input number here: ";
    cin >> geometrymenuinput;

    // Use if else statements to determine the input
    if (geometrymenuinput == 1) {
        circle();
    } else if (geometrymenuinput == 2) {
        rectangle();
    } else if (geometrymenuinput == 3) {
        triangle();
    } else if (geometrymenuinput == 4) {
        cout << "Returning to main menu..." << endl;
        mainmenu();
    } else {
        cout << "That is not a valid choice. Please input a number from 1-4." << endl;
        cin.ignore(); // Erase input
        question4(); // Try again
    }
    return 0; // No errors
}

int question5() {

    // Declare variables
    double speed;
    int hours;

    // Input - Ask user for speed and time
    cout << "What is the speed of the vehicle in miles per hour (mph)? ";
    cin >> speed;
    while (speed < 0) {
        cout << "Speed cannot be negative. Please enter a valid speed." << endl;
        cout << "What is the speed of the vehicle in miles per hour (mph)? ";
        cin >> speed;
    }

    cout << "How many hours has it traveled? ";
    cin >> hours;
    while (hours < 1) {
        cout << "Hours must be at least 1. Please enter a valid number of hours." << endl;
        cout << "How many hours has it traveled? ";
        cin >> hours;
    }

    // Calculate and Display - Calculate distance by input and display results
    cout << "\nHour  Distance Traveled" << endl;
    cout << "--------------------------------" << endl;

    for (int i = 1; i <= hours; i++) {
        double distance = speed * i;
        cout << setw(4) << i << setw(16) << distance << endl;
    }

    // Return to main menu
    mainmenu();
    return 0; // No errors
}