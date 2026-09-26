#include <iostream>
using namespace std;

int main(){
	int  v   = 100;
	int* ptr = &v;
	cout << "location of v's value = " << ptr << "\n"; 
	cout << "v = " << *ptr << "\n";
	return 0;
}
