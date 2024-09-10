#include "header.h"
// Average Of 3 Marks
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
void PrintResults(float avg)
{
  cout << "Total Average of Marks is: " << avg << endl;
}
int main()
{
  int Mark1, Mark2, Mark3;
  Read3Marks(Mark1, Mark2, Mark3);
  PrintResults(CalculateAvgOfMarks(Mark1, Mark2, Mark3));
  return (0);
}