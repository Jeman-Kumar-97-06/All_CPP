//Problem Statement : 
//The prime factors of 13195  are 5,7,13 and 29 .
//What is the largest prime factor of the number 600851475143 ?
#include <iostream>
using namespace std;

int isPrime(long long x){
	int iPrime = 1;
	for (long long i = x-1; i > x; i--){
		if (x%i == 0){
			iPrime = 0;
			break;
		}
	}
	return iPrime;
}

int main(){
	long long x= 600851475143;
	for (long long i = x-1; i >1; i--){
//		cout << i << "\n";
		if (x%i == 0){
			//cout << i << "\n";
			bool iP = isPrime(i);
			if (iP){
				cout << "ans: " << i << "\n";
				return 0;
			}
		}
	}
	return 0;
}
