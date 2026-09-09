#include <iostream>
using namespace std;

//In previous code we normally pass variables and it's values as parameters to a function.
//Here we will pass a reference to a variable.

void changeValue(int &num){
	num = 50;
}

void swapValues(int &x, int &y){
	int z = x;
	x     = y;
	y     = z;
}

int main()
{
	int value = 10;
	changeValue(value);
	cout << value << "\n";

	int firstNum  = 10;
	int secondNum = 20;

	cout << "Before swap : "<< "\n";
	cout << firstNum << secondNum << "\n";

	swapValues(firstNum, secondNum);

	cout << "After swap : " << "\n";
	cout << firstNum << secondNum << "\n";

	return 0;
}
