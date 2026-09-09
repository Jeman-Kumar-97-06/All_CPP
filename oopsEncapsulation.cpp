#include <iostream>
#include <string>

using namespace std;

//Encapsulation : to make sure that 'sensitive' data is hidden from users.

class Employee {
	private:
		int salary; //No one can access this directly.
	public:
		void setSalary(int s){	// This can be used to change the value of 'salary'.
			salary = s;
		}

		int getSalary(){ //This can be used to get the value of 'salary'.
			return salary;
		}
};

int main() {
	Employee myObj;
	myObj.setSalary(50000);
	cout << myObj.getSalary() << "\n";
	return 0;
}
