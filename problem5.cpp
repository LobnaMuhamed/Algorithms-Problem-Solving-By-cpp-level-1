#include "header.h"
// Full Name
stFullName ReadFullName()
{
	stFullName User;
	cout << "Enter First Name :- \n";
	cin >> User.FirstName;
	cout << "Enter Second Name :- \n";
	cin >> User.SecondName;
	return User;
}
string GetFullName(stFullName User)
{
	string FullName = User.FirstName + " " + User.SecondName;
	return FullName;
}
void PrintFullName(string FullName)
{
	cout << "Your Name Is " << FullName << endl;
}