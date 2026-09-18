#include <iostream>
#include <string>

using namespace std;

string rev(string x){
	string y = "";
	for(int i; i<x.length(); i++){
		y = y+x[x.length()-1-i];
	}
	return y;
}

int main(){
	string x;
	cout << "Enter a string : ";
	cin  >> x;
	cout << x << "\n";
	cout << rev(x) << "\n";
	return 0;
}
