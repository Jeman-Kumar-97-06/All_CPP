//Problem :
//Declare a int array named 'data' with elements : {10, 20, 30, 40, 50}.
//Declare a int pointer 'data_ptr' and point it to the first element of the array.
//Use pointer increment and the dereference operator to traverse the array and print all five elements.
#include <iostream>
using namespace std;

int main(){
	int data[] = {10, 20, 30, 40, 50};
	int*     x = &data[0];

	for (int i = 0; i < 5; i++){
		cout << *x << "\n";
		x++;
	}
	return 0;
}
