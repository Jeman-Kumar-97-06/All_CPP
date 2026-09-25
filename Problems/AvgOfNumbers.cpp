#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<int> x = {};
	cout << "Enter the numbers you want an average for: ";
	int i = 0;
	int k;
	while (i == 0){
		cin >> k;
		if (k==0){
			break;
		}
		x.push_back(k);
	}

	int sum = 0;
	for (int j:x){
		sum = sum + j;
	}

	cout << sum/x.size() << "\n";
	return 0;
}
