//Problem Statement:
//Mixed Data Types and Arithmetic.

#include <iostream>
#include <string>
using namespace std;

int main(){
	double x;
	double y;
	char   o;
	cout << "Type x: ";
	cin  >> x;
	cout << "Type y: ";
	cin  >> y;
	cout << "Type your OP : ";
	cin  >> o;
	switch(o){
		case '+':
			cout << x+y << "\n";
			break;
		case '-':
			cout << x-y << "\n";
			break;
		case 'x':
			cout << x*y << "\n";
			break;
		case '/':
			cout << x/y << "\n";
			break;
		default:
			cout << "I Don't know whaat the fuck that is\n";
			break;
	}
	return 0;
}
