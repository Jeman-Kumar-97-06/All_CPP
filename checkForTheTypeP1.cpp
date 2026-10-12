#include <iostream>
#include <type_traits>
using namespace std;

int main() {
	int x = 100;
	float y = 220;
	int z = 12;
	bool result1 = is_same<x, y> :: value;
	cout << boolalpha;
	cout << result1 << endl;
	return 0;
}
