#include "header.h"
// Circle Area Inscribted In A Square
float ReadNumber()
{
  float A;
  cout << "Enter Side Of Square:- \n";
  cin >> A;
  return A;
}

float ClaculateCircleArea(float A)
{
  const float PI = 3.14;
  float Area = PI * pow((A/2), 2);
  return (Area);
}
void PrintResult(float Area)
{
  cout << "Circle Area:- " << Area << endl;
}
int main()
{
  PrintResult(ClaculateCircleArea(ReadNumber()));
}