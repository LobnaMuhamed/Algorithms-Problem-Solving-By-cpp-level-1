#include "header.h"
// Factorial Number
int ReadPositiveNumber(string Mess)
{
  int Number;
  do {
    cout << Mess << endl;
    cin >> Number;
  }
  while(Number < 0);
  return Number;
}

int Factorial(int N)
{
  int F = 1;
  for (int Counter = N; Counter >= 1; Counter--)
  {
    F *= Counter;
  }
  return F;
}

int main()
{
  cout << Factorial(ReadPositiveNumber("Please Enter N?")) << endl;
  return 0;
}