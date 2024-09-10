#include "header.h"
// Sum Of Nums
enum enOddEven {Odd=1, Even = 2};

int ReadNumber()
{
  int N;
  cout << "Please Enter Number:-"<< endl;
  cin >> N;
  return N;
}
enOddEven CheckOddEven(int Number)
{
  if (Number % 2 != 0)
    return enOddEven::Odd;
  else
    return enOddEven::Even;
}
int SumOddNumsFrom1toN_UsingWhileLoop(int N)
{
  cout << "Using While Loop\n"; 
  int sum = 0, i = 0;
  while (i <= N)
  {
    i++;
    if (CheckOddEven(i) == enOddEven::Odd)
    {
      sum += i;
    }
    else
      continue;
  }
  return sum;
}
int SumOddNumsFrom1toN_UsingDoWhileLoop(int N)
{
  cout << "Using Do While Loop\n";
  int sum = 0, i = 0;
  do {
    i++;
    if (CheckOddEven(i) == enOddEven::Odd)
    {
      sum += i;
    }
    else
      continue;

  }
  while (i <= N);
  return sum;
}
int SumOddNumsFrom1toN_UsingForLoop(int N)
{
  cout << "Using For Loop\n";
  int sum = 0;
  for(int i = 1; i <= N; i++)
  {
    if (CheckOddEven(i) == enOddEven::Odd)
    {
      sum += i;
    }
    else
      continue;
  }
  return sum;
}

int main()
{
  int N = ReadNumber();
  cout << SumOddNumsFrom1toN_UsingDoWhileLoop(N) << endl;
  cout << SumOddNumsFrom1toN_UsingWhileLoop(N) << endl;
  cout << SumOddNumsFrom1toN_UsingForLoop(N) << endl;
  return 0;
}