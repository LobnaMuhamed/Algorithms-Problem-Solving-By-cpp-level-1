#include "header.h"
// Circle Area By Diameter
float ReadDiameter()
{
  float D;
  cout << "Enter Diameter D:- " << endl;
  cin >> D;
  return D;
}
float CalculateCircleArea(float D)
{
  const float PI = 3.14;
  return (((PI * pow(D, 2)) / 4));
}
void PrintResult(float Area)
{
  cout << "Circle Area:- " << Area << endl;
}
int main()
{
  PrintResult(CalculateCircleArea(ReadDiameter()));
  return 0;
}