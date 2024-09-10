#include "header.h"

int ReadAge()
{
  int age;
  cout << "Please Enter Your Age:-" << endl;
  cin >> age;
  return age;
}

bool ValidateNumberInRange(int Number, int From, int To)
{
  return (Number >= From && Number <= To);
}
int ReadUntilAgeBetween(int From, int To)
{
  int age = 0;
  do {
    age = ReadAge();
  }
  while (!ValidateNumberInRange(age, From, To));
  return age;
}
void PrintResult(int age)
{
  if (ValidateNumberInRange(age, 18, 45))
    cout << age << " is a valid age \n";
  else
    cout << age << " is an invalid age \n";
}

int main()
{
  PrintResult(ReadUntilAgeBetween(18, 45));

  return 0;
}