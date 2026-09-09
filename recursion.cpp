#include <iostream>
using namespace std;

//Recursion : A technique of making a function call itself.

int sum(int k){
	if (k > 0){
		return k+sum(k-1);
	}
	else {
		return 0;
	}
}

int main() {
	int result = sum(10);
	cout << result;
	return 0;
}
