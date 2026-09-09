#include <iostream>

using namespace std;

void myFunc(string fname, string lname){
	cout << "Fullname is : " << fname << " " << lname << "\n";
}

void myFunc2(string age, string name = "Nigga") {
	cout << "Hi " << name << ". You are " << age <<" years old\n";
}

int sumXY (int x, int y){
	return x+y;
}

int main() {
	myFunc("Jeman", "Kumar");
	myFunc2("29");
	cout << sumXY(5,10) << "\n";
	return 0;
}
