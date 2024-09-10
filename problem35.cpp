#include "header.h"
// Sum until -99

float ReadNum(string Message)
{
  int N;
  cout << Message << endl;
  cin >> N;
  return N;
}
float CalculateSumNumbers()
{
  int Sum = 0, Number = 0, Counter = 1;
  do
  {
    Number = ReadNum("Please Enter Number " + to_string(Counter));
    if (Number == -99)
      break;
    Sum += Number;
    Counter++;
  }
  while(Number != -99);
  return Sum;
}
int main()
{
  cout << CalculateSumNumbers() << endl;

  return 0;
}