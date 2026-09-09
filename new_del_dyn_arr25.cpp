#include <iostream>
#include <string>

using namespace std;

int main() {
	int numGuests;
	cout << "How many guests: ";
	cin  >> numGuests;

	if (numGuests <= 0){
		cout << "Number of guests must be at least 1. \n";
		return 0;
	}

	string* guests = new string[numGuests];

	cin.ignore();

	for (int i = 0; i < numGuests; i++ ) {
		cout << "Enter name for guest " << (i+1) << ": ";
		getline(cin, guests[i]);
	}

	cout << "\nGuests checked in :\n";
	for (int i = 0; i < numGuests; i++){
		cout << guests[i] << "\n";
	}

	delete[] guests; //Memory clear : "delete" in general and "delete[]" for arrays.
	return 0;
}
