#include "header.h"
// Prime Number

enum enPrimNumber
{
  Prime = 1,
  NotPrime = 0
};

float ReadPositiveNumber(string Mess)
{
  float Number = 0;
  do
  {
    cout << Mess << endl;
    cin >> Number;
  } while (Number <= 0);
  return Number;
}

enPrimNumber CheckPrime(int Number)
{
  int M = round(Number / 2);
  for(int counter = 2; counter <= M; counter++)
  {
    if (Number % counter == 0)
    {
      return enPrimNumber::NotPrime;
    }
  }
  return enPrimNumber::Prime;
}

void PrintResult(enPrimNumber Num)
{
  if (Num == enPrimNumber::Prime)
    cout << "Number Is Prime\n";
  else
    cout << "Number Is Not Prime\n";
}
int main()
{
  PrintResult(CheckPrime(ReadPositiveNumber("Please Enter A Positive Number:-")));
  return 0;
}