#include <iostream>
using namespace std;

int main(){
	char letter;
	cout << "Type a letter: ";
	cin  >> letter;
	switch(letter){
		case 'a':
			cout << "'a' for apple";
			break;
		case 'b':
			cout << "'b' for bat";
			break;
	}
	return 0;
}