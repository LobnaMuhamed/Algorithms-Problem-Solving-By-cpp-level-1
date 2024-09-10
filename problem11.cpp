#include "header.h"
// Max Of Two Numbers
void ReadTwoNums(int &Num1, int &Num2)
{
  cout << "Please Enter First Number:-\n";
  cin >> Num1;
  cout << "Please Enter Second Number:-\n";
  cin >> Num2;
}

int MaxNum(int Num1, int Num2)
{
  if (Num1 >= Num2)
    return Num1;
  else
    return Num2;
}
void PrintResult(int max)
{
  cout << "Max Number Is :- " << max;
}

int main()
{
  int Num1, Num2;
  ReadTwoNums(Num1, Num2);
  PrintResult(MaxNum(Num1, Num2));

  return (0);
}