#include "header.h"
// Mark Pass / Fail
enum enPassFail { Pass = 0, Fail = 1 };

int ReadDegree()
{
	cout << "Please Enter Your Degree:-\n";
	int degree;
	cin >> degree;
	return degree;
}

enPassFail CheckDegree(int degree)
{
	if (degree >= 50)
		return enPassFail::Pass;
	else
		return enPassFail::Fail;
}
void PrintMark(int degree)
{
	if ((CheckDegree(degree) == enPassFail::Pass))
		cout << "Pass\n";
	else
		cout << "Fail\n";
}

int main()
{
	PrintMark(ReadDegree());
	return 0;
}