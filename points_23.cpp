#include <iostream>

using namespace std;

//Pointer is variable that stores a memory address

int main() {
	string food = "Pizza";
	string* fPtr = &food;

        cout << "Location of 'Pizza' : " << fPtr << "\n";

        cout << "-----------------Dereferencing---------------\n";
        string x = "jeman";
        string* xP = &x;

        cout << xP << "\n";
        cout << *xP << "\n";

        cout << "-----------------Modifying Pointers----------------\n";

        string  y    = "JackDoe";
        string* yPtr = &y;

        *yPtr = "JaneD";
        cout << *yPtr << "\n";
        cout << y << "\n";

	return 0;
}
