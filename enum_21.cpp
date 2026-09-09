#include <iostream>
using namespace std;

enum Level {
	LOW,
	MEDIUM,
	HIGH
};

enum Level2 {
	LW=25,
	MID=50,
	HIH=75
};

enum Level3 {
	L=5,
	M, //This will automatically be 6 and H will automatically be 7
	H
};

int main() {
	enum Level myVar = MEDIUM;
	cout << myVar<<"\n";

	enum Level3 myVar2 = M;
	cout << myVar2 << "\n";

	return 0;
}
