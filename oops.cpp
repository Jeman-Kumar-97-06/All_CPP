#include <iostream>
#include <string>
using namespace std;

class myClass {
	public:  //"public" is the access specifier.
		int    myNum;	//Attribute
		string myString;//Attribute
};

class myAnimal {
	public:
		string typ;
		string name;
		int    legs;
};

class xClass {
	public:
		void myMethod(){
			cout << "Hello World!\n";
		};
		void myMethod2();
		int  speed(int maxSpeed);
};

void xClass::myMethod2() {
	cout << "Hello Jeman!\n";
}

int xClass::speed(int maxSpeed){
	return maxSpeed;
}

int main(){
	myClass myObj;
	myObj.myNum    = 29;
	myObj.myString = "Jeman";

	myAnimal dog;
	dog.typ  = "Labrador";
	dog.name = "Snoopy";
	dog.legs = 4;

	xClass xobj;

	xobj.myMethod();
	xobj.myMethod2();

	cout << xobj.speed(100) << "\n";

	return 0;
}
