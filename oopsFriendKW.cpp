#include <iostream>
#include <string>

//Usually, the private members of a class can be accessed and changed using public methods like getters and setters.
//But in some cases, you can use a special function called 'friend' function to access them directly.
//A "FRIEND" function is not a member of a class, but it is allowed to access the class's private data.

using namespace std;

class Employee{
	private:
		int salary;
	public:
		Employee(int s){
			salary = s;
		}
		friend void displaySalary(Employee emp) //Declared here
};

void displaySalary(Employee emp){ //Defined here
	cout << "Salary: " << emp.salary; //It can access emp's salary
}

int main(){
	Employee myEmp(50000);
	displaySalary(myEmp);
	return 0;
}
