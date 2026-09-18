//Statement: Check the upper and lower limits of a type:
#include <iostream>
#include <climits>

using namespace std;

int main(){
cout << "The Max limit of int data type:                 " << INT_MAX << endl;
cout << "The Max limit of unsigned int data type:        " << UINT_MAX << endl;
cout << "The Max limit of long long data type:           " << LLONG_MAX << endl;
cout << "The Max limit of unsigned long long data type:  " << ULLONG_MAX << endl;
cout << "The Bits contained in char data type: 	 	 " << CHAR_BIT << endl;
cout << "The Maximum limit of char data types:		 " << CHAR_MAX << endl;
cout << "The Max limit of signed char data types:        " << SCHAR_MAX << endl;
cout << "The Max limit of unsigned char data type:       " << UCHAR_MAX << endl;
cout << "The Max limit of short data type: 		 " << SHRT_MAX << endl;
cout << "The Max limit of unsigned short data type :     " << USHRT_MAX << endl;
return 0;
}
