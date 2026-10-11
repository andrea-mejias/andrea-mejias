// CSC 134
// M3T1 
// Andrea Mejias
// 10/11/2026

#include <iostream>
using namespace std;

int main() {

    // Declare all variables
    double length1, width1, length2, width2; 
    double area1, area2;

    // Input - Ask user for the length and width
    cout << "What is the length of the first rectangle? " << endl;
    cin >> length1;
    cout << "What is the width of the first rectangle? " << endl;
    cin >> width1;
    cout << "What is the length of the second rectangle? " << endl;
    cin >> length2;
    cout << "What is the width of the second rectangle? " << endl;
    cin >> width2;

    // Processing - Find the area
    area1 = length1 * width1;
    area2 = length2 * width2;


    // Output - Print the results of each area
    cout << "The first rectangle has an area of " << area1 << endl;
    cout << "The second rectangle has an area of " << area2 << endl;

    // Use If/Else statements to determine which rectangle's area is larger 
    if (area1 > area2) {
      cout << "The first rectangle is bigger than the second rectangle." << endl;
      cout << "Thank you for using our area calculator program." << endl;
    }
    
    else if (area2 > area1) {
      cout << "The second rectangle is bigger than the first rectangle." << endl;
      cout << "Thank you for using our area calculator program." << endl;
    }

    else if (area1 == area2) {
      cout << "Both rectangles have the same area size." << endl;
      cout << "Thank you for using our area calculator program." << endl;
    }

    return 0; // No errors
}