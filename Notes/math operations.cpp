/***
Sample program showing data types and math operations.
***/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	char c1;     //define character type variable
	c1 = 'A';     //assign variable
	
	string str1;     //define string type variable
	str1 = "JOHN";     //assign variable
	
	int int1, int2, int3, int4;     //define integer type variable - whole numbers
	
	float fnum1, fnum2;     //decimal points 
	float fnum3 = 3.14;	    //declare+initialize in one statement
	
	double dnum1, dnum2, dnum3;     //decimal points
	_
	double dnum3 = 34865239552326535653284.14;     //float+double are REAL numbers 
	cout <<"dnum3 value with exponents"<<dnum3<<end1;
	
	int1 = 5;
	int2 = 7;
	
	int3 = int1 + int2;
	int3 = int1 - int2;
	int3 = int1 * int2;
	int3 = int1 / int2;
	int3 = int1 % int2;
	
	dnum1 = 3.14;
	
	//int+double in same math op w diff left side
	int3 = int2 / dnum1;     
	dnum2 = int2 /dnum1;
	
	//double on left, diff combos on right
	dnum2 = 7/5;
	dnum2 = int2/int2;
	
	dnum2 = 7.0/5;
	dnum2 = (double)int2 / int1;
	
	dnum2 = 7 / 5.0;
	dnum2 = int2 / (double)int1;	
	
	cout <<"dnum2 is "<<dnum2;
	
	//math operators and priority
	int3 = 3 + 5 * 4 /2;
	int3 = (3 + 5) * 4 / 2;
	
	int3 = (3 + 5 * 4) / (21 + 2)
	
	cout<<"\nint3 is "<<int3;
	
	return 0;

}
