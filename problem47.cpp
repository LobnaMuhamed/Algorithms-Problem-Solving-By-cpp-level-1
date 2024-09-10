#include "header.h"
// ATM PIN

string ReadPinCode()
{
 string PIN;
 cout << "Please Enter Your PIN:- " << endl;
 cin >> PIN;
 return PIN;
}
bool Login()
{
  string PIN;
  do{
    PIN = ReadPinCode();
    if (PIN == "1234")
    {
      return 1;
    }
    else
    {
      cout << "Wrong PIN\n";
      system("color 4F");
    }
  }while(PIN != "1234");
  return 0;
}
int main()
{
  if(Login())
  {
    system("color 2F");
    cout << "\nYour account balance is " << 7500 << '\n';
  }
  return 0;
}