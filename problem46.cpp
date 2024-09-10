#include "header.h"
// Monthly Loan Installment

float ReadPositiveNum(string Mess)
{
  float Num;
  do{
    cout << Mess;
    cin >> Num;
  }while(Num <= 0);
  return Num;
}
float MonthlyInstallment(float LoanAmount, float TotalMonths)
{
  return float(LoanAmount / TotalMonths);
}
int main()
{
  float LoanAmount = ReadPositiveNum("Enter Loan Amount Please:- ");
  float TotalMonths = ReadPositiveNum("Enter Total Months Please:- ");
  cout << "Monthly Installment:- " << MonthlyInstallment(LoanAmount, TotalMonths);
  return 0;
}