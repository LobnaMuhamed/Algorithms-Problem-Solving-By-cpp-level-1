#include "header.h"
// Circle Area Along the Circumference

float ReadNumber()
{
  float L;
  cout << "Enter Circle Circumference:- " << endl;
  cin >> L;
  return (L);
}

float CalculateCircleArea(float L)
{
  const float PI = 3.14;
  return (pow(L, 2)/(4 * PI));
}
void PrintResult(float Area)
{
  cout << "Circle Area Is: " << Area << endl;
}
int main()
{
  PrintResult(CalculateCircleArea(ReadNumber()));
  return 0;
}
