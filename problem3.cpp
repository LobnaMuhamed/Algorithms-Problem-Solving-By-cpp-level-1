#include "header.h"
// Hire A Driver Case 1
stInfo ReadUserInfo()
{
	stInfo User;
	cout << "Please Enter Your Age: \n";
	cin >> User.Age;
	cout << "Do You Have Driver License? \n";
	cin >> User.HasDriverLicense;
	return User;
}

bool IsAccepted(stInfo User)
{
	return (User.Age > 21 && User.HasDriverLicense);
}

void PrintResult(stInfo User)
{
	if (IsAccepted(User))
		cout << "\n**** Hired ****\n";
	else
		cout << "\n**** Rejected *****" << endl;
}