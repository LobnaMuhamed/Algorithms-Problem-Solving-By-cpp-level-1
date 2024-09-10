#include "header.h"
// Circle Area Inscribed in an Isosceles Traingle

void ReadNums(float &A, float &B)
{
  cout << "Enter Triangle Side A:- " << endl;
  cin >> A;
  cout << "Enter Triangle Side B:- " << endl;
  cin >> B;
}
float CalculateCircleArea(float A, float B)
{
  const float PI = 3.14;
  float Area = PI * (pow(B, 2) / 4) * ((2 * A - B)/(2 * A + B));
  return Area;
}
void PrintResult(float Area)
{
  cout << "Circle Area IS :- " << Area << endl;
}

int main()
{
  float A, B;
  ReadNums(A, B);
  PrintResult(CalculateCircleArea(A, B));
  return 0;
}