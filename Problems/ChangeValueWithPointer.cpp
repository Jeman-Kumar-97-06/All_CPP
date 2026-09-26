#include <iostream>
using namespace std;

int main() {
	int  num     = 50;
	int* num_ptr = &num;

	*num_ptr = 99;

	cout << num << "\n";

	return 0;
}
