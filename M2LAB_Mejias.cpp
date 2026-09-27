// CSC 134 
// M2LAB 
// Andrea Mejias
// 9/20/2026

#include <iostream> 
#include <iomanip> // Two decimal places
using namespace std; 

int main() (
    
    // Declare constant variables
    const double cost_per_cubic_foot = 0.23;
    const double charge_per_cubic_foot = 0.50;

    // Declare double variables
    double length, width, height;
    double volume, cost, charge, profit;

    // Input - Ask user to enter input for variables
    cout << setprecision(2) << fixed << showpoint;
    cout << "Welcome to Solid Snake Crates Incorporation!" << endl;
    cout << "What is the length of your crate? ";
    cin >> length;
    cout << "What is the width of your crate? ";
    cin >> width;
    cout << "What is the height of your crate? ";
    cin >> height;

    // Processing - Calculate variables
    volume = length * width * height;
    cost = volume * cost_per_cubic_foot;
    charge = volume * charge_per_cubic_foot;
    profit = charge - cost;

    // Output - Display results
    

    return 0; // No errors
)