// CSC 134 
// M6T1
// Andrea Mejias
// 11/4/2026

#include <iostream>
using namespace std;

// CSC 134
// M5T1 - Intro to Functions
// Norrisa
// 3/18/24

// Goal 
// Create one void function,
// and one value returning function

// Declare functions and variables
void say_hello();
int  give_the_answer();
int  double_a_number(int num);

int main()
{
    // Display functions both void and int
    cout << "Say hello to Ishina-San!" << endl;
    say_hello();
    int my_answer = give_the_answer();
    cout << "The answer is: " << my_answer << endl;

    // now double the answer
    int twotimes = double_a_number(7);
    cout << "Here's another number: " << twotimes << endl;

    return 0;
}

// All void and int functions
void say_hello() {
    cout << "Hello! " << endl;
    return;
}

int give_the_answer() {
    return 42;
}

int double_a_number(int num) {
    int new_num = num * 2;
    return new_num;
}