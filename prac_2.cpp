#include <iostream>
using namespace std;

void changeValueFail(int num){
	num = 50;
}

void changeValueSuccess(int &num) {
	num = 50;
}

int main(){
	int num = 100;
	changeValueFail(num);
	cout <<"Can't change 'num' to 50: " << num << "\n";
	changeValueSuccess(num);
	cout << "Successfully changed 'num' to 50: " << num << "\n";
	return 0;
}
