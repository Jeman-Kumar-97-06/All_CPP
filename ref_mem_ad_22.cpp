#include <iostream>
#include <string>

using namespace std;

int main(){
	string food = "Pizza";
	string &meal = food;
	cout << food << "\n";
	cout << meal << "\n";
	cout << &meal << "\n";//Prints the location of "meal"

	cout << "-------------------------------\n";
	meal = "Burger";
	cout << food << "\n";
	cout << meal << "\n";
	cout << &meal << "\n";

	return 0;
}
