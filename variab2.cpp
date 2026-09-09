#include <iostream>
//int    : integers, whole numbers, without decimals : 123, 24, 1000
//double : stores floating point numbers, with decimals, : 1.24, 3.14, 0.05
//char   : stores chars, single chars, such as 'a' or 'B'. chars are surrounded by single quotes.
//string : stores text, such as 'hello world'.
//bool	 : true or false
//int x= 1000; --> here 'int' is the type, 'x' is the identifier and 1000 is the value.


int main()
{
	const int myX     = 3.14; //When you declare a CONST, It must be fucking assigned a value. assigning values to consts later
				  //won't work
	//myX = 3.12 ---> Not allowed
	std::cout << myX << "\n";//THis will print '3'. Nothing else.

	int myNum         = 100;
	int x = 5, y = 6, z = 7;
	std::cout << "x+y+z = " <<x+y+z <<"\n";

	int a, b, c;
	a = b = c = 50;
	std::cout << "a+b+c = " << a+b+c <<"\n";

	double myFloatNum = 5.99;
	char myLetter     = 'N';
	char nameT[]      = "Jeman";
	std::cout << myNum;
	std::cout << "\n";
	std::cout << nameT;
	std::cout << myLetter << "\n";
	std::cout << "i want to add "<<nameT<<" and "<< myLetter << "\n";
	std::cout << "\n";

	return 0;
}
