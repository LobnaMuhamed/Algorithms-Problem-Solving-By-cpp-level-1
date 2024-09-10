#include "header.h"
/*
Circle Area Described Around an Arbitrary Triangle
*/

void ReadNums(float &A, float &B, float &C)
{
  cout << "Enter First Side Of Rectangle A:-\n";
  cin >> A;
  cout << "Enter Second Side Of Rectangle B:-\n";
  cin >> B;
  cout << "Enter Third Side Of Rectangle C:-\n";
  cin >> C;
}

float CalculateCircleArea(float A, float B, float C)
{
  float PI = 3.14;
  float P = (A + B + C) / 2;
  float T = ((A * B * C) / (4 * (sqrt(P * (P - A) * (P - B) * (P - C)))));
  float Area = PI * pow(T, 2);
  return (Area);
}
void PrintResult(float Area)
{
  cout << "Circle Area Is:- " << Area << endl;
}

int main()
{
  float A, B, C;
  ReadNums(A, B, C);
  PrintResult(CalculateCircleArea(A, B, C));
  return 0;
}