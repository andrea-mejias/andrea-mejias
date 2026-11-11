// CSC 134
// M5LAB1 - Choose Your Own Adventure
// Andrea Mejias
// 11/9/2026

#include <iostream>
using namespace std;

// Declare function Prototypes
void main_menu();
void choice_front_door();
void choice_back_door();
void choice_go_home();
void choice_find_crowbar();
void choice_fight();
void choice_flight();
void choice_surrender();
void choice_find_music();
void choice_find_lantern();
void choice_break_box();
void choice_bring_box();

int main() {
  cout << "M5LAB1 - Choose Your Own Adventure" << endl;
  // load up the main menu
  main_menu();
  // when we return here, we're done
  cout << "Thanks for playing the Haunted House game!" << endl;
  return 0; // finished with no errors
}

void main_menu() {
  // Write a simple menu that lets the user choose 1,2, or 3, or 4 to quit.
  cout << "Main Menu" << endl;
  cout << "You're in front of a spooky old house..." << endl;
  cout << "What do you do?" << endl;
  cout << "1. Try the front door" << endl;
  cout << "2. Sneak around back" << endl;
  cout << "3. Forget it, and go home" << endl;
  cout << "4. [Quit]" << endl;
  cout << "Choose: ";
  int choice;
  cin >> choice;
  if (1 == choice) {
    choice_front_door();
  } else if (2 == choice) {
    choice_back_door();
  } else if (3 == choice) {
    choice_go_home();
  } else if (4 == choice) {
    cout << "Quitting game... Thank you for playing the Haunted House Game!" << endl;
    return; // go back to main()
  } else {
    cout << "That is not a valid choice. Please try again." << endl;
    cin.ignore(); // clear the user input
    main_menu();  // try again
  }
}

// FUNCTION DEFINITIONS

void choice_front_door() {
  cout << "You try to open the front door." << endl;
  cout << "It's locked. " << endl;
  cout << "What do you do? " << endl;
  cout << "1. Find something to open it" << endl;
  cout << "2. Give up and go home" << endl;
  int choice;
  cout << "Choose: ";
  cin >> choice;
  if (1 == choice) {
    choice_find_crowbar();
  } else if (2 == choice) {
    choice_go_home();
  } else {
    cout << "That is not a valid choice. Please try again." << endl;
    cin.ignore(); // clear the user input
    choice_front_door();
  }
}

void choice_back_door() {
  cout << "Even if you snuck around the back, that would be trespassing. " << endl;
  cout << "You did it anyway and met a female spirit that wants your body to curse the world." << endl;
  cout << "What do you do? " << endl;
  cout << "1. Fight" << endl;
  cout << "2. Flight" << endl;
  cout << "3. Surrender" << endl;
  int choice;
  cout << "Choose: ";
  cin >> choice;
  if (1 == choice) {
    choice_fight();
  } else if (2 == choice) {
    choice_flight();
  } else if (3 == choice) {
    choice_surrender();
  } else {
    cout << "That is not a valid choice. Please try again." << endl;
    cin.ignore(); // clear the user input
    choice_back_door();
  }
}

void choice_find_crowbar() {
  cout << "There is a fountain nearby and you dug your hand into the water to find a rusty crowbar. " << endl;
  cout << "You used the crowbar to pry the door open at the cost of it breaking from all that rust. " << endl;
  cout << "You go inside and hear a music box to the side. What do you do? " << endl;
  cout << "1. Follow the music box's melody" << endl;
  cout << "2. Find a lantern first" << endl;
  cout << "3. Give up and go home." << endl;
  int choice;
  cout << "Choose: ";
  cin >> choice;
  if (1 == choice) {
    choice_find_music();
  } else if (2 == choice) {
    choice_find_lantern();
  } else if (3 == choice) {
    choice_go_home();
  } else {
    cout << "That is not a valid choice. Please try again." << endl;
    cin.ignore(); // clear the user input
    choice_find_crowbar();
  }
}

void choice_find_music() {
  cout << "You go to where the music is coming from and find a lit room with a music box. " << endl;
  cout << "It's winding on its own and you don't know why it's here. " << endl;
  cout << "What do you do? " << endl;
  cout << "1. Break it because you can" << endl;
  cout << "2. Bring it with you" << endl;
  cout << "3. Just go home already." << endl;
  int choice;
  cout << "Choose: ";
  cin >> choice;
  if (1 == choice) {
    choice_break_box();
  } else if (2 == choice) {
    choice_bring_box();
  } else if (3 == choice) {
    choice_go_home();
  } else {
    cout << "That is not a valid choice. Please try again." << endl;
    cin.ignore(); // clear the user input
    choice_find_music();
  }
}

void choice_bring_box() {
  cout << "You brought the box with you but the lights go out and now you can't see. " << endl;
  cout << "Turns out you got caught easily by one of the lingering spirits. Seems like it was a trap. " << endl;
  cout << "GAME OVER - Maybe try again for a better outcome. " << endl;
  choice_find_music();
}

void choice_find_lantern() {
  cout << "Ain't the music coming from the other side? It's only a few feet away. " << endl;
  cout << "Not noting that only had you falling down a trap that killed you instantaneously. " << endl;
  cout << "GAME OVER - Maybe try again for a better outcome. " << endl;
  choice_find_crowbar();
}

void choice_flight() {
  cout << "Running away doesn't guarantee a successful escape." << endl;
  cout << "She grabbed you anyway and she killed you due to how pathetic you were. " << endl;
  cout << "GAME OVER - Maybe try again for a better outcome. " << endl;
  choice_back_door();
}

void choice_go_home() {
  cout << "You decide to abandon the idea and go home for your own safety. " << endl;
  cout << "You only came to see what secrets lie in this house, but it's best you don't. " << endl;
  cout << "Ending #1 - Smart Move" << endl;
  cout << "If you want to, play again to get a better ending." << endl;
  main_menu();
}

void choice_fight() {
  cout << "You choose to fight the spirit at the cost of your own soul being bound to her curse." << endl;
  cout << "Now all you can do is prevent the curse from spreading." << endl;
  cout << "Even if it means erasing your entire existence and raising the spirit as a newborn again." << endl;
  cout << "Ending #2 - Selfless Move" << endl;
  cout << "If you want to, play again to get a better ending." << endl;
  main_menu();
}

void choice_surrender() {
  cout << "You didn't think through this one, and you surrendered." << endl;
  cout << "Now the world is a disaster and a burning wasteland of wildfires thanks to your sacrifice. " << endl;
  cout << "Ending #3 - Stupid Move" << endl;
  cout << "If you want to, play again to get a better ending." << endl;
  main_menu();
}

void choice_break_box() {
  cout << "Nobody asked, but you broke the music box for good measures." << endl;
  cout << "You never realized it, but you just freed the female spirit bound to it. " << endl;
  cout << "You basically freed her from her curse and now you're free to go. " << endl;
  cout << "Ending #4 - Genius Move" << endl;
  cout << "If you want to, play again to get a different ending." << endl;
  main_menu();
}
