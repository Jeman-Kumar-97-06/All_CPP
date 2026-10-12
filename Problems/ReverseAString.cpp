#include <iostream>
#include <vector>
using namespace std;

int main(){
	int nums[]  = {1, 2, 3, 4, 5};
	//Output should be {5, 4, 3, 2, 1} without using index operators. Use only pointers:
	int* i	    = nums;
	int len     = sizeof(nums)/sizeof(nums[0]);
	int x[5];
	for (int j = 0; j<len; j++){
		x[j] = *(i+len-1-j);
	}
	cout << "Reverse of Array is : {";
	for (int k: x){
		cout << k << "," ;
	}
	cout << "}\n";
	return 0;
}
