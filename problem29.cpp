#include "header.h"
// Power Of 2_3_4
void ReadNumber(int &N)
{
  cout << "Please Enter Number:- " << endl;
  cin >> N;
}
void PowerOf2_3_4(int N)
{
  int a, b, c;
  a = N * N;
  b = N * N * N;
  c = N * N * N * N;
  cout << a << " " << b << " " << c << endl;
}
int main()
{
  int N;
  ReadNumber(N);
  PowerOf2_3_4(N);
}
