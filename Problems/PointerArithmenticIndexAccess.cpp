//Problem:
//Declare an int array "scores" with elements : {85, 90, 78, 95, 88}
//Declare a pointer "score_ptr" and point it to the first element
//Access and print a element from the array when it's position is given.

#include <iostream>
using namespace std;

int main(){
	int  scores[]  = {85, 90, 78, 95, 88};
	int* score_ptr = &scores[0];

	int p;

	cout << "Enter the position of element in the array you want between 1 and 5 : ";
	cin  >> p;

	score_ptr = score_ptr+p-1;

	cout << *score_ptr << "\n";

	return 0;
}
