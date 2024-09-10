#include "header.h"
// Sum Of 3 Numbers
void ReadNums(int &Num1, int &Num2, int &Num3)
{
  cout << "Enter Number 1:-\n";
  cin >> Num1;
  cout << "Enter Number 2:-\n";
  cin >> Num2;
  cout << "Enter Number 3:-\n";
  cin >> Num3;
}

int SumOf3Nums(int Num1, int Num2, int Num3)
{
  return (Num1 + Num2 + Num3);
}
void PrintResults(int Total)
{
  cout << "Sum Of Nums is :- " << Total << endl;
}

int main()
{
  int Num1, Num2, Num3;
  ReadNums(Num1, Num2, Num3);
  PrintResults(SumOf3Nums(Num1, Num2, Num3));
  return 0;
}