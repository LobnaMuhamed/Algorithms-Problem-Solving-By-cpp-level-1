#include "header.h"

// Pay Reminder
float ReadPositiveNumber(string Mess)
{
  float Num;
  do {
    cout << Mess << endl;
    cin >> Num;
  }
  while(Num <= 0);
  return Num;
}

float CalculateReminder(float TotalBill, float CashPaid)
{
  return (CashPaid - TotalBill);
}
int main()
{
  float TotalBill = ReadPositiveNumber("Enter Total Bill Please:- ");
  float CashPaid = ReadPositiveNumber("Enter Cash Paid Please:- ");
  cout << "***************************\n";
  cout << "Reminder = " << CalculateReminder(TotalBill, CashPaid);
  return 0;
}