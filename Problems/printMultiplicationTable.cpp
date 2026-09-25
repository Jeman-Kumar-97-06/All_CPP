#include <iostream>
#include <string>

using namespace std;

int main() {
	int x;
	cout << "Enter a number : ";
	cin  >> x;
	for (int i = 0; i <= 10; i++){
		cout << x << " X " << i << " = " << x*i << "\n";
	}
	return 0;
}
