#include <iostream>
#include <string>

using namespace std;

//A Virtual Function is a member function in the base class that can be overridden in derived classes.
//These functions let different objects respond differently to the same function call.

class Animal{
	public:
		void sound(){
			cout << "Animal Sounds\n";
		}
};

class Dog: public Animal{
	public:
		void sound(){
			cout << "Dog barks\n";
		}
};

int main(){
	Animal* a;
	Dog d;
	a = &d;
	a->sound();
	return 0;
}
