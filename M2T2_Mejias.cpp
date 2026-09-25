// CSC 134 
// M2T2
// Andrea Mejias
// 9/25/2026

#include <iostream>
#include <iomanip> // for adding two decimal places
using namespace std;

int main() {
    // Purpose - Create a simple receipt
    // Should also handle typical sales tax of 8%
    
    // Declare variables
    string item = "Pizza";
    double itemprice = 5.99;
    double taxpercent = 0.08;
    double taxamount;
    double totalprice;

    // Greet user and take order
    cout << "Welcome to our authentic restaurant!" << endl;
    cout << "You ordered one " << item << "." << endl;

    // Calculate meal price, sales tax and total price
    taxamount = itemprice * taxpercent; // Take 8% of the item
    totalprice = itemprice + taxamount;

    // Print user's receipt
    cout << setprecision(2) << fixed;
    cout << "Thank you for shopping with us!" << endl;
    cout << "-------------------------------" << endl;
    cout << item << "\t$" << itemprice << endl;
    cout << "Tax" << "\t\t$" << taxamount << endl;
    cout << "-------------------------------" << endl;
    cout << "Total" << "\t\t$" << totalprice << endl;

    return 0; // No errors
}