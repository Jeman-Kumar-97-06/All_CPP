#include <iostream>
using namespace std;

int fctl(int x){
	if (x>1){
		return x*fctl(x-1);
	}
	else{
		return 1;
	}
}

int main(){
	int x;
	cout << "Enter a number : ";
	cin  >> x;
	cout << fctl(x) << "\n";
	return 0;
}
