#include <iostream>

using namespace std;

int main(){
	string food = "Pizza";
	string &meal = food;
	string* fPtr = &food;
	string* ft   = &food;

	cout << "food : " << food  << "\n";
	cout << "&meal: " << &meal << "\n";
	cout << "meal : " << meal  << "\n";
	cout << "fPtr : " << fPtr  << "\n";
	cout << "ft   : " << ft    << "\n";
	return 0;
}
