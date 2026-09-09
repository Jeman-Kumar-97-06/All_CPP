#include <iostream>
#include <string>
using namespace std;

//AccessSpecifiers control how the members of a class can be accessed.
//They help protect data and organize code so that only the right parts can be seen or changed.

class myClass{
	public:
		int x;
	private:
		int y;
};

class myClassX{
	int x; //By default class memebers are private.
	int y;
}

int main() {
	myClass myobj;
	myobj.x = 25;//Allowed
	myobj.y = 50;//Not Allowed
	return 0;
}
