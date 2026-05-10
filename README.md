# Salary-Calculations-Using-Switch-Statement

Sample Program
Let’s consider a problem. In a company, there are deductions from the salary of the
employees for a fund. The deductions rules are as follows: 
If salary is less than 10,000 then no deduction
If salary is more than 10,000 and less than 20,000 then deduct Rs. 1,000 as fund 
If salary is equal to or more than 20,000 then deduct 7 % of the salary for fund 
Take salary input from user and after appropriate deduction show the net payable amount.

Solution:
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
