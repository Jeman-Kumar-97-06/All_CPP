#include <iostream>
#include <string>
using namespace std;

class Vehicle{
	public:
		string brand = "Ford";
		void honk(){
			cout << "Tuut, tuut! \n";
		}
};

class Car: public Vehicle{
	public:
		string model = "Mustang";
};

//Multilevel inheritance:
class MyClass{
	public:
		void myFunc(){
			cout << "Some content in parent class.\n";
		}
};

class MyChild:public MyClass {
};

class MyGrandChild:public MyChild {
};

//Multiple Inheritance:
class MyClassX{
	public:
		void myFuncX(){
			cout << "Some Content in MyClassX.\n";
		}
};

class MyOtherClassX{
	public:
		void myOtherFuncX(){
			cout << "Some Content in MyOtherClassX.\n";
		}
};

class MyChildX : public MyClassX, public MyOtherClassX{
};

//Inheritance Access with "protected" Access Specifier:
class Employee{
	protected:
		int salary;
};

class Programmer:public Employee{
	public:
		int bonus;
		void setSalary(int s){
			salary = s;
		}
		int getSalary(){
			return salary;
		}
};

int main() {
	Car myCar;
	myCar.honk();
	cout << "--------------------------------\n";

	MyGrandChild myObj;
	myObj.myFunc();
	cout << "--------------------------------\n";

	MyChildX myObjX;
	myObjX.myFuncX();
	myObjX.myOtherFuncX();
	cout << "--------------------------------\n";

	Programmer myPObj;
	myPObj.setSalary(50000);
	cout << myPObj.getSalary() << "\n";
	Employee myEObj;
//	cout << myEObj.salary << "\n";//This will give error. Cuz the 'salary' is protected and u can't access shit!
	return 0;
}

