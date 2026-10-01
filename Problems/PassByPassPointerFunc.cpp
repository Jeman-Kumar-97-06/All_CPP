//Problem:
//	Write a function named 'increment_value' that takes an integer pointer as it's only argument. Inside the function, increment the value that pointer points to by
//10. In "main" function, call the function using the address of an integer variable and print the updated value
#include <iostream>
using namespace std;

void increment_value(int* x){
	if (x != nullptr){
		*x = *x+1;
	}
}

int main() {
	int y;
	cout << "Enter a number: " << endl;
	cin  >> y;

	int* i = &y;
	cout << i << endl;
	cout << *i << endl;
	increment_value(i);
	cout << i << endl;
	cout << *i << endl;
	return 0;
}
