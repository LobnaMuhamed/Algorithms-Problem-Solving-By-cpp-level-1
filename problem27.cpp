#include "header.h"

enum enOddEven
{
  Odd = 1,
  Even = 2,
};
enum enSumType
{
  All = 0,
  Type_Odd = 1,
  Type_Even = 2,
};
void ShowSumType()
{
  cout << "Choose Sum Type:-\n";
  cout << "(0) All\n";
  cout << "(1) Odd\n";
  cout << "(2) Even" << endl;
}
int ReadNumber()
{
  int N;
  cout << "Enter Number:- " << endl;
  cin >> N;
  return N;
}
int ReadSumType()
{
  int T;
  cout << "Enter Sum Type:- " << endl;
  cin >> T;
  return T;
}
enOddEven CheckOddEven(int Number)
{
  if (Number % 2 != 0)
    return enOddEven::Odd;
  else
    return enOddEven::Even;
}
int SumRange(int N, int T)
{
  int sum = 0;
  if (T == enSumType::All)
  {
    for (int i = 1; i <= N; i++)
    {
      sum += i;
    }
  }
  else if (T == enSumType::Type_Odd)
  {
    for (int i = 1; i <= N; i++)
    {
      if (CheckOddEven(i) == enOddEven::Odd)
      {
        sum += i;
      }
      else
        continue;
    }
  }
  else if (T == enSumType::Type_Even)
  {
    for (int i = 1; i <= N; i++)
    {
      if (CheckOddEven(i) == enOddEven::Even)
      {
        sum += i;
      }
      else
        continue;
    }
  }
  return sum;
}
int main()
{
  ShowSumType();
  int N = ReadNumber();
  int T = ReadSumType();
  cout << SumRange(N, T);
}