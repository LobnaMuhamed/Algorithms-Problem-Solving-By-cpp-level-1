#include "header.h"

int ReadNumberInRange(int From, int To)
{
  int grade;
  do
  {
    cout << "Enter Your Grade:-\n";
    cin >> grade;
  } while (grade < From || grade > To);
  return grade;
}
char GetGradeLetter(int grade)
{
  if (grade >= 90)
    return 'A';
  else if (grade >= 80)
    return 'B';
  else if (grade >= 70)
    return 'C';
  else if (grade >= 60)
    return 'D';
  else if (grade >= 50)
    return 'E';
  else
    return 'F';
}
int main()
{
  cout << endl
       << "Result = " << GetGradeLetter(ReadNumberInRange(0, 100)) << endl;
}