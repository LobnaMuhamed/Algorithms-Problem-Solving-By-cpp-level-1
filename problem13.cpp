#include "header.h"
// Swap Two Numbers
void ReadNums(int &Num1, int &Num2)
{
  cout << "Enter First Number:-\n";
  cin >> Num1;
  cout << "Enter Second Number:-\n";
  cin >> Num2;
}
void Swaping(int &Num1, int &Num2)
{
 
  int temp = Num1;
  Num1 = Num2;
  Num2 = temp;
}
void PrintResult(int Num1, int Num2)
{
  cout <<  "Number 1:- " << Num1 << "\n"
       << "Number 2:- " << Num2 << endl << endl;
}
int main()
{
  int Num1, Num2;
  ReadNums(Num1, Num2);
  PrintResult(Num1, Num2);
  Swaping(Num1, Num2);
  PrintResult(Num1, Num2);
  return 0;
}