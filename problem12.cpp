#include "header.h"
// Max Of Three Numbers
void ReadNums(int &A, int &B, int &C)
{
  cout << "Enter First Number: \n";
  cin >> A;
  cout << "Enter Second Number: \n";
  cin >> B;
  cout << "Enter Third Number: \n";
  cin >> C;
}

int MaxNum(int A, int B, int C)
{
  if (A >= B && A >= C)
    return A;
  else if (B >= A && B >= C)
    return B;
  else
    return C;
}
void PrintResult(int max)
{
  cout << "Max Num Is:- " << max << endl;
}
int main()
{
  int A, B, C;
  ReadNums(A, B, C);
  PrintResult(MaxNum(A, B, C));
  return 0;
}