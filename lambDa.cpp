//Lambda function is a small anonymous function u can write directly in your code.
#include <iostream>
#include <string>
using namespace std;

int main(){
	auto msg = [] () {
		cout << "Hello World!\n";
	};
	msg();

	cout << "-------------------------------\n";

	const double PI = 3.14;
	auto  area = [PI] (int rad){
		cout << "The Area of the circle is :" << PI*rad*rad << "\n";
	};
	area(9);

	cout << "--------------------------------\n";

	string x = "Jeman";
	auto xS = [&x](){
		cout << "The name is: " << x << "\n";
	};

	xS();

	return 0;
}
