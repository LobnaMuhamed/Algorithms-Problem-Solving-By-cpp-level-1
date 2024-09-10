#include "header.h"

struct stPiggyBankContent
{
  int Pennies, Nickels, Dimes, Quarters, Dollars;
};
stPiggyBankContent ReadPiggyBankConteny()
{
  stPiggyBankContent PiggyBankContent;
  cout << "Please Enter Number Of Penny:- \n";
  cin >> PiggyBankContent.Pennies;
  cout << "Please Enter Number  Of Nickels:- \n";
  cin >> PiggyBankContent.Nickels;
  cout << "Please Enter Number Of Dimes:- \n";
  cin >> PiggyBankContent.Dimes;
  cout << "Please Enter Number Of Quarter:- \n";
  cin >> PiggyBankContent.Quarters;
  cout << "Please Enter Number Of Dollars:- \n";
  cin >> PiggyBankContent.Dollars;
  return PiggyBankContent;
}

float CalculateTotalPennies(stPiggyBankContent PiggyBankContent)
{
  float TotalPennies = 0;
  TotalPennies = PiggyBankContent.Pennies * 1 + PiggyBankContent.Nickels * 5 + PiggyBankContent.Dimes * 10
                + PiggyBankContent.Quarters * 25 + PiggyBankContent.Dollars * 100;
  return TotalPennies;
}
int main()
{
  int TotalPennies = CalculateTotalPennies(ReadPiggyBankConteny());
  cout << "Total Pennies:- " << TotalPennies << endl;
  cout << "Total Dollars:- " << float(TotalPennies) / 100 << endl;
  return 0;
}