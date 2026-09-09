#include <iostream>
using namespace std;

struct Car{
	string brand;
	int year;
};

void myFunc(Car c){
	cout << "Brand: " << c.brand << ", Year: " << c.year << "\n";
}

void updateYear(Car &c) {
	c.year++;
}

int main(){
	Car myCar = {"Toyota", 2020}
	myFunc(myCar);
	cout << "--------------------------\n";
	updateYear(myCar);
	cout << "The " << myCar.brand << " is now from year " << myCar.year << "\n";
	return 0;
}
