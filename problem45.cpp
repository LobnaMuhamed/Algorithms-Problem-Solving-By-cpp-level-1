#include "header.h"
// Loan Installment Months

float ReadPositiveNum(string Mess)
{
  float Num = 0;
  do{
    cout << Mess << endl;
    cin >> Num;
  }
  while(Num <= 0);
  return Num;
}

float TotalMonths(float LoanAmount, float MonthlyInstallment)
{
  return (float)LoanAmount / MonthlyInstallment;
}
int main()
{
  float LoanAmount = ReadPositiveNum("Please Enter Loan Amount:-");
  float MonthlyInstallment = ReadPositiveNum("Please Enter Monthly Payment");
  cout << "Total Months : " << TotalMonths(LoanAmount, MonthlyInstallment) << endl;
  return 0;  
}