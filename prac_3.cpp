#include <iostream>
#include <string>

using namespace std;

int main(){
int x;

cout << "Type a number : " << "\n";
cin  >> x;

string y = to_string(x);
string isPallin = "It is a Palindrome\n";

for (int i=0; i<(y.length()/2) ;i++){
	if (y[i] == y[y.length()-1-i]){
		cout << y[i] << ":" << y[y.length()-1-i] <<"\n";
		continue;
	}
	else{
		isPallin =  "It's not a palindrome\n";
	}
}
cout << isPallin ;
return 0;
}
