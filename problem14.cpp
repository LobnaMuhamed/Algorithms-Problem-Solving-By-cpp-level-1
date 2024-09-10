#include "header.h"
// Rectangle Area

void ReadNums(float &A, float &B)
{
  cout << "Enter First Number:-\n";
  cin >> A;
  cout << "Enter Second Number:-\n";
  cin >> B;
}
float CalculatRectangleArea(float A, float B)
{
  return (A * B);
}
void PrintResult(float Area)
{
  cout << "Area Of Rectangle Is:- " << Area << endl;
}
int main()
{
  float A, B;
  ReadNums(A, B);
  PrintResult(CalculatRectangleArea(A, B));
  return 0;
}