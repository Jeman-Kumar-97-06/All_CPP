#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main(){
	string k;
	int max = 0;
	int x;
	int i = 0;
	cout << "Enter a number: \n";
	while (i == 0){
		cin >> k;
		if (k == "Exit"){
			break;
		}
		else {
			istringstream ss(k);
			ss >> x;
			if (x > max){
				max = x;
			}
		}
	}
	cout << max << "\n";
	return 0;
}
