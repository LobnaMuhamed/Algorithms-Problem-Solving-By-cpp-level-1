#include "header.h"
// Service Fee & Sales Tax

float ReadPositveNumber(string Mess)
{
  float Num;
  do {
    cout << Mess << endl;
    cin >> Num;
  }
  while (Num <= 0);
  return Num;
}

float CalculateFee_Tax(float TotalBill)
{
  TotalBill *= 1.1;
  TotalBill *= 1.16;
  return TotalBill;
}
int main()
{
  float TotalBill = ReadPositveNumber("Please Enter Number Of Money:- ");
  cout << "Total Bill = " << TotalBill << endl;
  cout <<  "Total Bill After Service Fee and Sales Tax = "<< CalculateFee_Tax(TotalBill);
  return 0;
}