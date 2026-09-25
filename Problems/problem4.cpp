//Statement :
//Working with Arrays : 
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
	vector<string> cars = {"Ford", "BMW", "Toyota", "Volvo"};
	cars.push_back("TVS");
	cout << "{";
	for (string x: cars){
		cout << x<< ", ";
	}
	cout << "}\n";
	return 0;
}
