#include <iostream>
using namespace std;

int main()
{
	string x;
	string y;

	cout <<"Type your name:";
	cin >> x;
//	getline(cin, x);

	cout <<"Type your age:";
	cin >> y;
	//getline(cin, y);

	cout <<"Your name is "<< x <<" and your age is "<< y <<"\n";

	return 0;
}
