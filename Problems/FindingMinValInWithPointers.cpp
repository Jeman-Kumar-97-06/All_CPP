//Problem: Print the Min Value in a array using only pointers:
#include <iostream>
using namespace std;

int * find_min_ptr(int* x, int len) {
	int* min = x;
	for (int i = 0; i < len ; i++) {
		if (*(x+i) < *min){
			min = (x+i);
		}
	}
	return min;
};

int main(){
	int data[] = {45, 12, 67, 8, 33};
	int* k = find_min_ptr(data, sizeof(data)/sizeof(data[0]));
	cout << *k << endl;
	return 0;
}
