#include <iostream>
using namespace std;

int main(){
	int i = 0;
	while (i<5){
		cout<< i << "\n";
		i++;
	}

	cout << "---------------------------------\n";

	int countdown = 3;
	while (countdown > 0){
		cout << countdown << "\n";
		countdown--;
	}
	cout << "Happy New Year!\n";
	return 0;
}

