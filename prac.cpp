#include <iostream>
#include <string>
using namespace std;

int main(){
	string food = "Pizza";
	string &meal = food;

	cout << "'food'  : " << food  << "\n";
	cout << "'meal'  : " << meal  << "\n";
	cout << "'&meal' : " << &meal << "\n";

	cout << "------------------------------\n";
	meal = "Burger";
	cout << "'food'  : " << food  << "\n";
	cout << "'meal'  : " << meal  << "\n";
	cout << "'&meal' : " << &meal << "\n";

	cout << "------------------------------\n";
	food = "Shit";
	cout << "'food'  : " << food  << "\n";
	cout << "'meal'  : " << meal  << "\n";
	cout << "'&meal' : " << &meal << "\n";

	cout << "------------------------------\n";
	string ifood  = "Dosa";
	string* fPtr  = &food;
	string* fP    = new string;
	int*    num   = new int;
	*num          = 24;
	cout << "'fPtr' : " << fPtr << "\n";
	cout << "'fP'   : " << fP   << "\n";
	cout << "'num'  : " << num  << "\n";
	cout << "'&num' : " << &num << "\n";
	cout << "'*num' : " << *num << "\n";
	cout << "------------------------------\n";

	delete fP;
	cout << fP << "\n";

	return 0;
}
