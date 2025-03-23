#include <iostream>
#include <string>
using namespace std;

int main() {
    int directInt = 42;
    double directDouble(3.14);
    string directString("Hello!");

    int assignedInt;
    assignedInt = 100;

    double assignedDouble;
    assignedDouble = 6.28;

    string assignedString;
    assignedString = "World!";

    int listInt{50};
    double listDouble{9.81};
    string listString{"Goodbye!"};

    cout << "Direct Initialization:" << endl;
    cout << "directInt: " << directInt << endl;
    cout << "directDouble: " << directDouble << endl;
    cout << "directString: " << directString << endl;

    cout << "\nAssignment After Declaration:" << endl;
    cout << "assignedInt: " << assignedInt << endl;
    cout << "assignedDouble: " << assignedDouble << endl;
    cout << "assignedString: " << assignedString << endl;

    cout << "\nList Initialization:" << endl;
    cout << "listInt: " << listInt << endl;
    cout << "listDouble: " << listDouble << endl;
    cout << "listString: " << listString << endl;

    return 0;
}

