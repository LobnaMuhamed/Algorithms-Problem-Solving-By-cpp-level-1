#include "header.h"
// Power Of M
void ReadNums(int &N, int &M)
{
  cout << "Please Enter Number:- " << endl;
  cin >> N;
  cout << "Please Enter Number Of Power" << endl;
  cin >> M;
}
int PowerOfM(int N, int M)
{
  int P = 1;
  if (!M)
    return 1;
  while(M >= 1)
  {
    P *= N;
    M--;
  }
  return P;
}
int main()
{
  int N, M;
  ReadNums(N, M);
  cout << "Result = "<< PowerOfM(N, M) << endl ;
  return 0;
}