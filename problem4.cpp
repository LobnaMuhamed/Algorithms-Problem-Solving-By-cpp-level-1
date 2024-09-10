#include "header.h"
// Hire A Driver Case 2 
stInfo ReadUserInfo2()
{
	stInfo User;
	cout << "Please Enter Your Age: \n";
	cin >> User.Age;
	cout << "Do You Have Driver License? \n";
	cin >> User.HasDriverLicense;
	cout << "Do You Have Recommendation? \n";
	cin >> User.HasRecommendation;
	return User;
}

bool IsAccepted2(stInfo User)
{
	return (User.HasRecommendation || (User.Age > 21 && User.HasDriverLicense));
}

void PrintResult2(stInfo User)
{
	if (IsAccepted2(User))
		cout << "\n**** Hired ****\n";
	else
		cout << "\n**** Rejected *****" << endl;
}