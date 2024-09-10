#include "header.h"
// Print Numbers From 1 To N
int ReadNumber()
{
  int N;
  cout << "Please Enter Number:- \n";
  cin >> N;
  return N;
}
void PrintRangeFrom1toN_UsingWhile(int N)
{
  cout << "Print Range From 1 to N Using (While Loop)\n";
  int i = 1;
  while (i <= N)
  {
    cout << i << endl;
    i++;
  }
}
void PrintRangeFrom1toN_UsingDoWhile(int N)
{
  cout << "Print Range From 1 to N Using (Do While Loop)\n";

  int i = 1;
  do
  {
    cout << i << endl;
    i++;
  } while (i <= N);
}
void PrintRangeFrom1toN_UsingFor(int N)
{
  cout << "Print Range From 1 to N Using (For Loop)\n";
  for (int i = 1; i <= N; i++)
  {
    cout << i << endl;
  }
}

int main()
{
  int N = ReadNumber();

  PrintRangeFrom1toN_UsingWhile(N);
  PrintRangeFrom1toN_UsingDoWhile(N);
  PrintRangeFrom1toN_UsingFor(N);

  return 0;
}