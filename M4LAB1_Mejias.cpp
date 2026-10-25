// CSC 134 
// M4LAB1
// Andrea Mejias
// 10/25/2026

#include <iostream>
using namespace std;

int main() {

    // Declare variables
    int height = 5;
    int width = 5;

    cout << "The entire block." << endl;

    // Full nested for loop
    for (int j=0; j < height; j++) {
        // Print one row
        for (int i=0; i < width; i++) {
            cout << "*" << " ";
        }
        cout << endl;
    }

    return 0;
}