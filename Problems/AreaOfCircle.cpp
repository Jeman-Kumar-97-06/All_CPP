#include <iostream>
using namespace std;

int main(){
	const double pi = 3.14;
	double       r;
	cout << "Enter the radius of the circle in cm: ";
	cin  >> r;
	cout << "Area of the circle : " << pi*r*r << " sqcms\n";
	return 0;
}
