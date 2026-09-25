#include <iostream>
#include <string>

using namespace std;

int main() {
	double sidea;
	double sideb;
	double sidec;

	cout << "Enter side A : ";
	cin  >> sidea;
	cout << "Enter side B : ";
	cin  >> sideb;
	cout << "Enter side C : ";
	cin  >> sidec;

	if (sidea == sideb && sideb == sidec && sidea == sidec){
		cout << "Equivalent" << "\n";
	}

	else if(sidea == sideb || sideb == sidec || sidea == sidec) {
		cout << "Isosceles" << "\n";
	}

	else if(sidea != sideb && sideb != sidec && sidea != sidec){
		cout << "Scalene\n";
	}

	return 0;
}
