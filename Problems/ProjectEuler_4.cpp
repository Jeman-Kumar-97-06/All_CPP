#include <iostream>
#include <string>
using namespace std;

int isPallindrome(string x){
	int isPallin = 1;
	for (int i = 0; i < x.length()/2; i++){
		if (x[i] == x[x.length()-1-i]){
			continue;
		}
		else{
			isPallin = 0;
		}
	}
	return isPallin;
}

int main() {
	int maxPallin = 0;
	for (int i = 999; i>=100; i--){
		for (int j = 999; j >= 100; j--) {
			//cout << i << "x" << j << ": " << i*j << "\n";
			if (isPallindrome(to_string(i*j))){
				if (i*j > maxPallin){
					maxPallin = i*j;
				}
			}
		}
	}
	cout<<maxPallin<<"\n";
	return 0;
}
