#include <iostream>
#include <string>
using namespace std;

int main(){
	for (int i = 0; i < 5; i++) {
		cout << i << "\n";
	}

	cout << "-----------\n";

	int sum = 0;
	int unt;
	cout << "Enter a number till which you need the sum : ";
	cin  >> unt;
	for (int i = 1; i <= unt; i++) {
		sum += i;
	} 
	cout << "Sum from 1 to "<< unt << " is " << sum << "\n";

	cout << "----------\n";

	int myNums[5] = {10, 20, 30, 40, 50};
	for (int num : myNums) {
		cout << num << "\n";
	}

	cout << "---------\n";

	string word = "hello";
	for (char x : word){
		cout << x << "\n";
	}

	return 0;
}

