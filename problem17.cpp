#include "header.h"
// Circle Area
float ReadRadius()
{
  float R;
  cout << "Enter Radius R:- " << endl;
  cin >> R;
  return R;
}
float CalculateCirculeArea(float R)
{
  const float PI = 3.14159265;
  return float(PI * pow(R, 2));
}
void PrintResult(float Area)
{
  cout << "Circule Area Is:- " << Area << endl;
}
int main()
{
  PrintResult(CalculateCirculeArea(ReadRadius()));
  return 0;
}