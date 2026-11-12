// CSC 134
// M5LAB2
// Andrea Mejias
// 11/11/2026

#include <iostream>
using namespace std;

// Declare function prototypes
double getLength();
double getWidth();
double getArea(double length, double width);
void displayData(double length, double width, double area);

int main()
{
    // This program calculates the area of a rectangle.

    double length;    // The rectangle's length
    double width;     // The rectangle's width
    double area;      // The rectangle's area
          
    // Get the rectangle's length.
    length = getLength();
   
    // Get the rectangle's width.
    width = getWidth();
   
    // Get the rectangle's area.
    area = getArea(length, width);
   
    // Display the rectangle's data.
    displayData(length, width, area);
          
    return 0;
}

// Function Definitions

double getLength() {
    double length;
    cout << "What is the length of your rectangle? ";
    cin >> length;
    return length;
}

double getWidth() {
    double width;
    cout << "What is the width of your rectangle? ";
    cin >> width;
    return width;
}

// Calculate for area
double getArea(double length, double width) {
    return length * width;
}

// Display all data
void displayData(double length, double width, double area) {
    cout << "Rectangle Data" << endl;
    cout << "Length: " << length << endl;
    cout << "Width:  " << width  << endl;
    cout << "Area:   " << area   << endl;
}