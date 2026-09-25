#include <iostream>
#include <string>
#include <cmath>
using namespace std;


int main(){
	long long int x;
	cout << "ENter a num that has 2 to 6 digits: ";
	cin  >> x;
	int k =  pow(10, to_string(x).length()-1);
	for (int i = 10; i<=k ;i=i*10){
		cout << x%i << "\n";
	}
	return 0;
}
