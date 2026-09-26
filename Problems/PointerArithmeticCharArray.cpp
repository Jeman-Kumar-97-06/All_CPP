#include <iostream>
using namespace std;

int main(){
	char word[] = "CODE";
	char*     x = &word[0];
	cout << *(x+1) << "\n";
	return 0;
}
