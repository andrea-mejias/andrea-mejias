/*
CSC 134
M2HW1
Andrea Mejias
9/27/2026
*/

#include <iostream>
#include <iomanip> // Two decimal places
#include <string>
using namespace std;

int question1() {

    // Question 1 - Bank Account Program

    // Declare variables
    string fullname;
    int accountnumber;
    double startingbalance, depositamount, withdrawalamount, finalbalance;

    // Input - Ask user for information
    cout << setprecision(2) << fixed << showpoint;
    cout << "Welcome to the Bank Account Program!" << endl;
    cout << "What is your full name on your bank account? Include a middle initial if applicable. " << endl;
    cin >> ws; // Skip any leftover whitespace
    getline(cin, fullname); // Read the whole line, not just one word
    cout << "What is your bank account number? " << endl;
    cin >> accountnumber;
    cout << "What is your starting account balance? " << endl;
    cin >> startingbalance;
    cout << "How much money have you deposited? " << endl;
    cin >> depositamount;
    cout << "How much money have you withdrawn? " << endl;
    cin >> withdrawalamount;

    // Processing - Calculate account balance
    finalbalance = startingbalance + depositamount - withdrawalamount;

    // Output - Display the current state of the bank account
    cout << "Here is the status of your current bank account." << endl;
    cout << "Name: " << fullname << endl;
    cout << "Account Number: " << accountnumber << endl;
    cout << "Account Balance: $" << finalbalance << endl;
    cout << "Thank you for using the Bank Account Program!" << endl;

    return 0; // No errors
}

int question2() {

    // Question 2 - M2LAB Improvised

    // Declare constant variables
    const double cost_per_cubic_foot = 0.30;
    const double charge_per_cubic_foot = 0.52; // Cannot be above 0.52

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
    cout << "The volume of your crate is " << volume << " cubic feet." << endl;
    cout << "The cost of your crate is $" << cost << endl;
    cout << "Charge for the volume of your crate is $" << charge << endl;
    cout << "The profit from your crate is $" << profit << endl;
    cout << "Thank you for working with Solid Snake Crates Incorporation!" << endl;

    return 0; // No errors
}

int question3() {

    // Question 3 - Pizza Party Program

    // Declare variables
    int numberofpizzas, slicesperpizza, numberofvisitors, totalslices, leftoverslices;

    // Input - Ask user for information
    cout << "Welcome to the Pizza Party Program!" << endl;
    cout << "How many pizzas will you be ordering? " << endl;
    cin >> numberofpizzas;
    cout << "How many slices will be served in each pizza? " << endl;
    cin >> slicesperpizza;
    cout << "How many visitors will be coming? " << endl;
    cin >> numberofvisitors;

    // Processing - Calculate how many slices are left over
    totalslices = numberofpizzas * slicesperpizza;
    leftoverslices = totalslices % numberofvisitors; // FIX: % gives the remainder, / does not

    // Output - Display how many slices are left over
    cout << "The amount of slices leftover is " << leftoverslices << endl;
    cout << "Thank you for using the Pizza Party Program!" << endl;

    return 0; // No errors
}

int question4() {

    // Question 4 - Sports Cheering Program

    // Declare variables
    string school, team;

    // Input - Ask user for information
    cout << "What is the name of your school? " << endl;
    cin >> ws; // Skip leftover whitespace from earlier input
    getline(cin, school);
    cout << "What is the name of your team? " << endl;
    getline(cin, team);

    // Processing - Create the cheer phrases
    string letsGo = "Let's go ";
    string cheerOne = letsGo + school;
    string cheerTwo = letsGo + team;

    // Output - Display only string variables of the cheer phrases
    cout << cheerOne << endl;
    cout << cheerOne << endl;
    cout << cheerOne << endl;
    cout << cheerTwo << endl;

    return 0; // No errors
}

// Execute all programs
int main() {

    question1();
    cout << endl;
    question2();
    cout << endl;
    question3();
    cout << endl;
    question4();

    return 0;
}