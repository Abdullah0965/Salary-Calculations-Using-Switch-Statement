#include <iostream>
using namespace std;
int main()
{
	int salary;
	float deductions, netSalary;
	cout << "Enter salary of a worker in your company: ";
	cin >> salary;
	switch (salary / 10000)
	{
	case 0:
		deductions = 0;
		netSalary = salary - deductions;
		cout << "The Net Salary of the worker after '" << deductions << "' deductions is:" << netSalary;
		break;
	case 1:
		deductions = 1000;
		netSalary = salary - deductions;
		cout << "The Net Salary of the worker after '" << deductions << "' deductions is:" << netSalary;
		break;
	default:
		deductions = salary * 7 / 100;
		netSalary = salary - deductions;
		cout << "The Net Salary of the worker after '" << deductions << "' deductions is:" << netSalary;
		
	}

	return 0;
}