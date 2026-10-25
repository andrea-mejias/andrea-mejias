// CSC 134
// M4T1 - While
// Andrea Mejias
// 10/25/2026

#include <iostream>
using namespace std;
  
int main()
{

    // Part 1 - Say hi five times
    int count = 1;
    while (count <= 5) {
        cout << "Hello! " << count << endl;
        count++;
     }

    cout << "Loop is finished!" << endl;

    // Part 2 - Tables and numbers
    const int minimum = 1;
    const int maximum = 10;

    int number = minimum;
    // Table header
    cout << "Number\tNumber Squared" << endl;

    while (number <= maximum) {
        cout << number << "\t\t" << number * number << endl;
        number++;
    }

    return 0; 
}