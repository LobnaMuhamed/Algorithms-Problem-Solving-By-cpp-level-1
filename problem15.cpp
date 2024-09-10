#include "header.h"
// Rectangle Area By Diagonal & Side
void ReadNums(float &a, float &d)
{
  cout << "Enter Side Area Of Rectangle:- " << endl;
  cin >> a;
  cout << "Enter Diagonal:- " << endl;
  cin >> d;
}
float CalculateRectangleArea(float a, float d)
{
  return (a * sqrt(pow(d, 2) - pow(a, 2)));
}

void PrintResult(float Area)
{
  cout << "Rectangle Area:- " << Area << endl;
}
int main()
{
  float a, d;
  ReadNums(a, d);
  PrintResult(CalculateRectangleArea(a, d));
  return 0;
}