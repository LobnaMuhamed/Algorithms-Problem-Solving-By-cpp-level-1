#include "header.h"
// Half Number
int ReadFullNumber()
{
	int num;
	cout << "Enter Number Please:- \n";
	cin >> num;
	return num;
}
float CalculateHalfNum(int num)
{
	return (float)num / 2;
}
void PrintResultOfNum(int num)
{
	string Result = "The Half Of Number " + to_string(num) + " is " + to_string(CalculateHalfNum(num));
	cout << Result << endl;
}
