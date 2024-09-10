#include "header.h"
float ReadPositiveNumber(string Mess)
{
  float Number;
  do
  {
    cout << Mess << endl;
    cin >> Number;
  } while (Number < 0);
  return Number;
}
float GetComissionPercentage(float N)
{
  if (N > 1000000)
    return 0.01;
  else if (N >= 500000)
    return 0.02;
  else if (N > 100000)
    return 0.03;
  else if (N > 500000)
    return 0.05;
  else
    return 0;
}
float CalculateTotalComission(float TotalSales)
{
  return GetComissionPercentage(TotalSales) * TotalSales;
}
int main()
{
  cout << CalculateTotalComission(ReadPositiveNumber("Please Enter Salary:-")) << endl;
  return 0;
}