#include "header.h"
// Average Pass / Fail
enum enPass_Fail
{ Pass = 0, Fail = 1};
void Read3Marks(int &Mark1, int &Mark2, int &Mark3)
{
  cout << "Please Enter First Mark:- \n";
  cin >> Mark1;
  cout << "Please Enter Second Mark:- \n";
  cin >> Mark2;
  cout << "Please Enter Third Mark:- \n";
  cin >> Mark3;
}

int CalculateSumOfMarks(int Mark1, int Mark2, int Mark3)
{
  return (Mark1 + Mark2 + Mark3);
}

float CalculateAvgOfMarks(int Mark1, int Mark2, int Mark3)
{
  return ((float)CalculateSumOfMarks(Mark1, Mark2, Mark3) / 3);
}
enPass_Fail CheckMark(float Avg)
{
  if (Avg >= 50)
  {
    return (enPass_Fail::Pass);
  }
  else
    return (enPass_Fail::Fail);
}
void PrintResults(float Avg)
{
  cout << "Total Average of Marks is: " << Avg << endl;
  if (CheckMark(Avg) == enPass_Fail::Pass)
    cout << "You Passed\n";
  else
    cout << "You Failed\n";
}
int main()
{
  int Mark1, Mark2, Mark3;
  Read3Marks(Mark1, Mark2, Mark3);
  PrintResults(CalculateAvgOfMarks(Mark1, Mark2, Mark3));
  return (0);
}