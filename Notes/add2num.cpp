/***
Sample C++ program/source code to define 2 nums and sum them up
***/

#include <iostream>     //brings in library of code for output (cout)
using namespace std;     //finds instructions in libraries

int main()
{
	int num1, num2, sum;     //define
	
	num1 = 10;     //assign
	num2 = 3;     //assign
	
	sum = num1 + num2;     //compute
	
	cout << "num1 is " << num1 << endl;
	cout << "num2 is " << num2 << endl;
	cout << "the sum is " << sum;
	cout << "\nthe product is " << num1/num2;
}
