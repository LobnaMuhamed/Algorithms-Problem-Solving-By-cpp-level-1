#include "header.h"
// Print Numbers from N to 1

int ReadNumber()
{
  int N;
  cout << "Please Enter Number:-\n";
  cin >> N;
  return N;
}
void PrintRangeFromNto1_UsingWhile(int N)
{
  int i = 1;
  cout << "Print Range From N to 1 Using (While Loop)\n";
  while (N >= i)
  {
    cout << N << endl;
    N--;
  }
}
void PrintRangeFromNto1_UsingDoWhile(int N)
{
  int i = 1;
  cout << "Print Range From N to 1 Using (Do While Loop)\n";
  do
  {
    cout << N << endl;
    N--;
  } while (N >= i);
}
void PrintRangeFromNto1_UsingFor(int N)
{
  cout << "Print Range From N to 1 Using (For Loop)\n";
  for (int i = 1; N >= i; N--)
  {
    cout << N << endl;
  }
}

int main()
{
  int N = ReadNumber();
  PrintRangeFromNto1_UsingWhile(N);
  PrintRangeFromNto1_UsingDoWhile(N);
  PrintRangeFromNto1_UsingFor(N);
}