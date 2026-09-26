#include <iostream>
using namespace std;

int main(){
	int   x   = 42;
	int*  p1  = &x;
//	int*  p2  = &*p1; --> This works as a double pointer
	int** p2  = &p1; 

//	cout << *p2 << "\n";
	cout << **p2 << "\n";
	return 0;
}
