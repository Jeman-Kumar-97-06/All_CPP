#include <iostream>
using namespace std;

void myFunc(int myNums[5]) {
	for (int i = 0; i< 5; i++) {
		cout << myNums[i] <<"\n";
	}
}

int main(){
	int myNums[5] = {12, 10, 16, 19, 3};
	myFunc(myNums);
	return 0;
}
