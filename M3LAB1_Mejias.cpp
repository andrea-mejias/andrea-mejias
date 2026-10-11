// CSC 134
// M3LAB1
// Andrea Mejias
// 10/11/2026

#include <iostream>
using namespace std;

// Declare void functions

void chooseAction1();
void chooseAction2();
void chooseAction3();
void chooseAction4();

// Input - Begin the combat
int main() {
  
  // Declare the choice variable
  int choice; 

  // Ask the question
  cout << "Welcome to the Airship Combat Program! Let's begin our combat!" << endl;
  cout << "The Right Hand Man approaches. What will you do to defeat him?" << endl;
  cout << "Type a number of one of the four actions below: "; 
  cin >> choice;

  // Use if/else statemnts to determine the void function
  if (1 == choice) {
    chooseAction1();
  }
  else if (2 == choice) {
    chooseAction2();
  }
  else if (3 == choice) {
    chooseAction3();
  }
  else if (4 == choice) {
    chooseAction4();
  }
  else {
    cout << "That is not a valid choice. Please restart the program to try again." << endl;
  }

  cout << "Thank you for playing the Airship Combat Program!" << endl;
  return 0; // tells the computer that we finished without errors

} 

// Define all void functions

void chooseAction1() {
  cout << "You chose to fight against the Right Hand Man." << endl;
  cout << "Out of all those options you chose Fight? How boring." << endl;
  cout << "You died from the Right Hand Man throwing bombs towards you." << endl;
}

void chooseAction2() {
  cout << "You chose to use a blitz against the Right Hand Man." << endl;
  cout << "I thought for sure that would have done it." << endl;
  cout << "You died from the Right Hand Man using a chain gun against you." << endl;
}

void chooseAction3() {
  cout << "You chose to use a chainsaw against the Right Hand Man." << endl;
  cout << "The chainsaw was a critical attack against the Right Hand Man!" << endl;
  cout << "You defeated the Right Hand Man! Congratulations!" << endl;
}

void chooseAction4() {
  cout << "You chose to use magic against the Right Hand Man." << endl;
  cout << "You used reflection? Gee, that... BackFIREd. 10/10 jokes here, folks." << endl;
  cout << "You died from the your magic attack reflecting against you by the Right Hand Man's shielding." << endl;
}
