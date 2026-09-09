#include <iostream>
#include <string>

using namespace std;

//In C++, you can have more than one constructor in the same class. This is called constructor overloading.
//Each constructor with the same name must have different number or types of parameters.

class Car{
	public:
		string brand;
		string model;
	Car(){
		brand = "Unknown";
		model = "Unknown";
	}

	Car(string b, string m){
		brand = b;
		model = m;
	}
};

int main() {
	Car car1;
	Car car2("BMW", "x5");

	cout << "Car 1 : \n";
	cout << "Brand : " << car1.brand << "\n";
	cout << "Model : " << car1.model << "\n";

	cout << "Car 2 : \n";
	cout << "Brand : " << car2.brand << "\n";
	cout << "Model : " << car2.model << "\n";

	return 0;
}
