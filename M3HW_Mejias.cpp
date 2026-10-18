// CSC 134
// M3HW
// Andrea Mejias
// 10/17/2026

#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <ctime>
using namespace std;

int question1() {

    // Declare variables
    string answer;

    // Input - Ask the user a question
    cout << "Hello! My name is Mr. Puzzles and I will be your chat bot for today's session!" << endl;
    cout << "I am quite the showmaster here! I like to make shows for entertainment! " << endl;
    cout << "So far, do you like me? Answer yes or no. " << endl;
    cin >> answer;

    // Display - Let the chat bot respond to the user's input
    if (answer == "yes") {
        cout << "Wonderful! I'm glad that you like me, new user! " << endl;
    }
    else if (answer == "no") {
        cout << "Oh dear... Well, I'm sure you'll learn to like me better! " << endl;
    }
    else {
        cout << "Are you not sure of your answer? That is okay by me! I accept any neutral opinions on me! " << endl;
    }

    return 0;
}

int question2() {
        // Purpose - Create a simple receipt
    // Should also handle typical sales tax of 8%
    
    // Declare variables
    string item = "Meal";
    int deliverytype;
    double itemprice = 7.99;
    double taxpercent = 0.08;
    double taxamount;
    double tippercent = 0.15;
    double tipamount;
    double totalprice;

    // Greet user and take order
    cout << "Welcome to our Coffee N' Bombs Cafe!" << endl;
    cout << "You ordered one " << item << "." << endl;
    cout << "Please enter 1 if the order is Dine In, or 2 if the order is To Go. " << endl;
    cin >> deliverytype;

    // Calculate meal price, sales tax and total price

    if (deliverytype == 1) {
        taxamount = itemprice * taxpercent;
        tipamount = itemprice * tippercent;
        totalprice = itemprice + taxamount + tipamount; 
    }

    else if (deliverytype == 2) {
        taxamount = itemprice * taxpercent;
        totalprice = itemprice + taxamount;
    }

    else {
        cout << "Invalid number. Please enter 1 or 2. " << endl;
        return 1;
    }

    // Print user's receipt
    cout << setprecision(2) << fixed;
    cout << "Thank you for shopping with us!" << endl;
    cout << "-------------------------------" << endl;
    cout << item << "\t$" << itemprice << endl;
    cout << "Tax" << "\t\t$" << taxamount << endl;
    cout << "Tip" << "\t\t$" << tipamount << endl;
    cout << "-------------------------------" << endl;
    cout << "Total" << "\t\t$" << totalprice << endl;

    return 0; // No errors
}

#include <iostream>
using namespace std;

int question3() {

    // Declare variables
    int choice1, choice2, choice3;

    // Input - Ask the user to choose an option for the story
    cout << "Welcome to the Choose Your Own Adventure Game! " << endl;
    cout << "You are a heisting criminal wanting to rob a bank for money. " << endl;
    cout << "What will you do to succeed the robbery? " << endl;
    cout << "1 - Dig a tunnel below you. " << endl;
    cout << "2 - Disguise yourself as a bag. " << endl;
    cout << "3 - Use a teleporter device. " << endl;
    cout << "Enter any of the numbers displayed to select your action. " << endl;
    cin >> choice1;

    // Display - Determine what each action does

    if (choice1 == 1) {
        cout << "You dug a tunnel below you but ended up in tracks that soon came with a train running you over. " << endl;
        cout << "Didn't you learn the one rule of Minecraft? Never mine straight down. " << endl;
        return 1;
    }
    else if (choice1 == 3) {   
        cout << "You used the teleporter but the work of the device is so unpredictable that you got half of your body stuck on a wall. " << endl;
        cout << "Maybe not use the easiest technology to try and do something. They always end up going haywire. " << endl;
        return 1;
    }
    else if (choice1 == 2) {   
        cout << "You disguised yourself as a lost bag and the employees took you in. " << endl;
        cout << "...but there was already a security trap inside the vault. Now you will have to escape prison. " << endl;
        cout << "Somehow a package got delivered to you and contains some objects for escape. " << endl;
        cout << "What will you use to escape? " << endl;
        cout << "1 - Contact a lawyer. " << endl;
        cout << "2 - Drink an NrG drink. " << endl;
        cout << "3 - Use a rocket launcher. " << endl;
        cin >> choice2;

        if (choice2 == 2) {
            cout << "Not really a good choice. It slows down everything around you, which is a positive. " << endl;
            cout << "You forgot that side effects included possibilities of a heart attack. You shouldn't have ignored that one. " << endl;
            return 1;
        }
        else if (choice2 == 3) {
            cout << "Using a rocket launcher with no experience guarantees a botched attempt. " << endl;
            cout << "You didn't know how to aim, and the rocket hit your face instead. " << endl;
            return 1;
        }
        else if (choice2 == 1) {
            cout << "This is the most sensible option. You contacted a lawyer and they proposed evidence against the victims. " << endl;
            cout << "You are now free and want to steal a diamond from the museum by sneaking in. " << endl;
            cout << "You are inches away from grabbing the diamond as you are on top of a hanging hallway. What will you use? " << endl;
            cout << "1 - Just jump down. " << endl;
            cout << "2 - Use a portal gun." << endl;
            cout << "3 - Use a wire grappler. " << endl;
            cin >> choice3;

            if (choice3 == 1) {
                cout << "First off, did you really think that was going to work? " << endl;
                cout << "You knocked your head onto the glass and now you're bleeding from a head injury. " << endl;
                return 1;
            }
            else if (choice3 == 2) {
                cout << "Many accidents with these guns, and of course you put yourself into an infinite loop. " << endl;
                cout << "Dropping a diamond through a portal will not guarantee a safe landing. " << endl;
                return 1;
            }
            else if (choice3 == 3) {
                cout << "You successfully escaped with the diamond and you're now a mastered criminal! " << endl;
                cout << "Don't celebrate too early though. The government and security are now on your tail. " << endl;
                cout << "Thank you for playing the Choose Your Own Adventure Game! " << endl;
                return 0;
            }
            else {
                cout << "Invalid choice. Game over. " << endl;
                return 1;
            }
        }
        else {
            cout << "Invalid choice. Game over. " << endl;
            return 1;
        }
    }
    else {
        cout << "Invalid choice. Game over. " << endl;
        return 1;
    }
}

int question4() {
    
    // Seed the random number generator
    std::srand(static_cast<unsigned>(std::time(nullptr)));
 
    // Declare variables and generate two random single-digit numbers
    int num1 = std::rand() % 10;
    int num2 = std::rand() % 10;
    int answer;
 
    // Input - Ask the question
    std::cout << "What is " << num1 << " plus " << num2 << "?" << std::endl;
    std::cin >> answer;
 
    // Display - Check the answer
    if (answer == num1 + num2) {
        std::cout << "Correct." << std::endl;
    } else {
        std::cout << "Incorrect." << std::endl;
    }
 
    return 0;
}

// Start the program fully

int main() {
    question1();
    question2();
    question3();
    question4();
    return 0;
}