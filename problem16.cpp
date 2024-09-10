#include "header.h"
// Traingle Area
void ReadNums(float &A, float &H)
{
  cout << "Enter Triangle Side A:- " << endl;
  cin >> A;
  cout << "Enter Triangle Hight H:- " << endl;
  cin >> H;
}

float ClaculateTriangleArea(float A, float H)
{
  return (0.5 * (A * H));
}
void PrintResult(float Area)
{
  cout << "Triangle Area Is :- " << Area << endl;
}
int main()
{
  float A, H;
  ReadNums(A, H);
  PrintResult(ClaculateTriangleArea(A, H));
}