//Problem:
//Write a program to calculate and print the sum of all elements in a given int array using only pointer arithmetic to access the
//elements. Do not use the array index operator:
#include <iostream>
using namespace std;

int main(){
	int x[5] = {1,5,10,15,20};
	int*  i  = x;

	int sum  = 0;
	int len  = sizeof(x)/sizeof(x[0]);
	for (int j = 0; j < len; j++){
		sum += *(i+j);
	}
	cout << sum << endl;
	return 0;
}
