#include <iostream>
using namespace std;

int main(){
	int  i   = 10;
	int* ptr = &i;

	cout << sizeof(i) << endl;
	cout << sizeof(ptr) << endl;

	return 0;
}
