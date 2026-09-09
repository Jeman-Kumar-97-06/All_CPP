#include <iostream>
#include <string>

using namespace std;
struct animal{
	string typ;
	string name;
	int    age;
};

int main(){
	struct {
		int myNum;
		string myString;
	} myStruct;

	myStruct.myNum = 1;
	myStruct.myString = "Hello World!";

	cout <<myStruct.myNum<<"\n";
	cout <<myStruct.myString<<"\n";

	cout <<"-------------------------------\n";

	struct {
		string brand;
		string model;
		int    year;
	} car1, car2;

	car1.brand = "BMW";
	car2.brand = "Ford";

	car1.model = "x90";
	car2.brand = "Mustang";

	car1.year = 2005;
	car2.year = 2009;

	cout << car1.brand << " : " << car1.model << " : " << car1.year << "\n";
	cout << car2.brand << " : " << car2.model << " : " << car2.year << "\n";

	cout <<"------------------------------\n";

	animal myDog;
	myDog.typ = "dog";
	myDog.name= "snoopy";
	myDog.age = 2;

	cout << "my " << myDog.typ << "'s name is " << myDog.name << " and it's " << myDog.age << " years old\n";

	return 0;
}

