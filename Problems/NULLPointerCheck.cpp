//Problem:
//Declare an int pointer name "safe_ptr" and initialize it to "nullptr". Write a conditional statement to check if the pointer is
//NULL before attempting to dereference it. If it is null, print "Pointer is null, cannot dereference." If it is not null, initialize
//a variable, assign its address to the pointer, and print the dereferenced value.
#include <iostream>
#include <string>
using namespace std;

int main(){
	int* safe_pt = nullptr;
	if (safe_pt == nullptr){
		cout << "Pointer is null, cannot dereference." << endl;
		int valid_data = 77;
		safe_pt = &valid_data;
	}
	if (safe_pt != nullptr){
		cout << "Pointer is now valid. Deferenced value: " << *safe_pt << endl;
	}
	return 0;
}
