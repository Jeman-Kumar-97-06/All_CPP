#include <iostream>
#include <string>

using namespace std;

class myClass{
	public:
		myClass(){ //Constructor should have the same name as the Class. It shouldn't have return type like 'void', 'int'...
			cout << "Hello!\n";
		}
};

//Constructor with Params:
class Car{
	public:
		string brand;
		string model;
		int    year;
		Car(string x, string y, int z){
			brand = x;
			model = y;
			year  = z;
		}
};

int main() {
	myClass myObj;

	Car myCar("BMW", "x5", 1999);

	return 0;
}
