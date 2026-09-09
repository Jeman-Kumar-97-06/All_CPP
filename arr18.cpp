#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	string cars[4] = {"Ford", "BMW", "Toyota", "Volve"};

	cout << cars <<"\n"; //This will print the location of the array.

	cout << cars[3] << "\n"; // Print last element of the array.

	cars[1] = "Benz"; //Change the 2nd element of array to 'Benz'

	cout << cars[1] << "\n";

	cout << "------------------------------------\n";

	for (int i = 0; i < 4; i++) {
		cout << cars[i] << "\n";
	}

	cout << "-------------------------------------\n";

	string fruits[5] = {"Apple", "Pineapple", "Mango", "Banana", "papaya"};
	for (string x:fruits){
		cout << x << "\n";
	}

	cout << "------------------------------------\n";

	//Vectors : 
	//	Used for ops that require adding and removing array elements.
	//	vectors are resizable arrays.
	vector<string> carz = {"Volvo", "Ford", "BMW"};
	carz.push_back("Tesla");
	cout << carz[3] << "\n";

	//Finding a size of an array : 
	int numbbs[5] = {10, 20, 30, 40, 50};
	cout << sizeof(numbbs) << "\n"; //Answer : 20. Cuz : 1 int element = 4 bytes. Total size = 4 bytes x 5 elements = 20
	cout << sizeof(numbbs)/sizeof(numbbs[0])<<"\n";

	cout <<"-------------------------------------\n";

	string letters[2][4] = {{"a", "b", "c", "d"}, {"v", "x", "y", "z"}};
	cout << letters[1][2] << "\n"; //Answer : 'y' 

	return 0;

}
