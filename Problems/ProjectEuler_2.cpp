#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<int> x = {1,2};
	for ( int i = 1; i < 999; i++){
		if (x[i]+x[i-1]>4000000){
			break;
		}
		x.push_back(x[i]+x[i-1]);
	}
	int sum = 0;
	for (int y:x){
		if (y%2 == 0){
			sum += y;
		}
	}
	cout << sum << "\n";
	return 0;
}
