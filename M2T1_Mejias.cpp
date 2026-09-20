// CSC 134 
// M1LAB 
// Andrea Mejias
// 9/20/2026

// Header comments go here 
#include <iostream> 
#include <iomanip> // for two decimal places
using namespace std; 

int main() { 

    // This program will simulate an apple orchard. 

    // Set up all variables
    string firstname, lastname, fullname;
    string mainproduct = "apples";
    double priceperapple = 0.99; 
    double totalprice;
    int amountpurchased;

    // Give the customer a welcome message
    cout << "Welcome to our " << mainproduct << " store!" << endl; 
    cout << "What's your first name? ";
    cin >> firstname;
    cout << "What's your last name? ";
    cin >> lastname;
    fullname = firstname + " " + lastname;
    cout << "Nice to meet you, " << fullname << endl;

    // Ask the customer how much they want to purchase
    cout << "How many " << mainproduct << " would you like today? ";
    cin >> amountpurchased;

    // Calculate the total price
    totalprice = amountpurchased * priceperapple;

    // Format all prices to two decimal places
    cout << setprecision(2) << fixed;
    
    // Give the final results
    cout << "For " << amountpurchased << " " << mainproduct << endl;
    cout << "That will be: $" << totalprice << endl;
    cout << "Thank you for shopping with us!" << endl;

    return 0; 
} 