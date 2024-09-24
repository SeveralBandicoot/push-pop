/*
Push & Pop

@ AJ Enrique Arguello

Research the Push( ) & Pop( ) commands. Cite your sources

Using Stacks and the push( ) command, prompt the user to enter names until ctrl-z is entered. 

   Display the names using a Ranged Loop and appropriate commands

Pop( ) the Stack and note, which name is removed? First or last? Does this follow FILO?

*/
#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main() {
    stack<string> names; // string stack names 
    string nameInput;

    cout << "Insert names until CTL-Z (or CTRL+D on Unix) is entered: " << endl;

    while (cin >> nameInput) { // while user inputs names 
        names.push(nameInput); // pushes userinput into names stack
    }

    names.pop(); // pops back top element of stack

    vector<string> namesVec; // initialization of namesVec vector

    while (!names.empty()) { // until names stack is empty
        namesVec.push_back(names.top()); // pushes back the elements from stack into vector
        names.pop(); // pops names from stack to vector
    }

    for (const string& name : namesVec) { // prints name using ranged loop
        cout << " " << name;
    }
    cout << endl;

    return 0;
}
