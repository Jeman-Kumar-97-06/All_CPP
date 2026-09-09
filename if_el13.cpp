#include <iostream>
using namespace std;

int main()
{
	int age;
	cout << "Enter your age : ";
	cin  >> age;
	if (age < 18){
		cout << "You are minor\n";
	}
	else if (age > 18) {
		cout << "You are major\n";
	}
	else {
		cout << "Who the fuck are you\n";
	}
}
