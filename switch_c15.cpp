#include <iostream>
using namespace std;

int main()
{
	char letter;
	cout << "Type a Letter : ";
	cin  >> letter;

	switch(letter){
		case 'a':
			cout << "a for apple\n";
			break;
		case 'b':
			cout << "b for bat\n";
			break;
		case 'c':
			cout << "c for cat\n";
			break;
	}
	return 0;
}
