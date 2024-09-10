#include "header.h"
// Check Odd Or Even
int ReadNum()
{
	int Num;
	cout << "Please Enter Number: \n";
	cin >> Num;
	return (Num);
}
enNumberType CheckNumType(int Num)
{
	int Result = Num % 2;
	if (Result == 0)
		return enNumberType::Even;
	else
		return enNumberType::Odd;
}

void PrintNumType(enNumberType Num) 
{
	if (Num == enNumberType::Even)
		cout << "Your Number Is Even\n";
	else
		cout << "Your Number Is Odd\n";
}
