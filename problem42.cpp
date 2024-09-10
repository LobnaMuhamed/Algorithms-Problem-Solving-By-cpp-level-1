#include "header.h"

// Task DayOfWeek
enum enDayOfWeek
{
  Sun = 1,
  Mon = 2,
  Tue = 3,
  Wed = 4,
  Thu = 5,
  Fri = 6,
  Sat = 7,
  Other,
};

int ReadInRangeFromTo(string Mess, int From, int To)
{
  int Num;
  do
  {
    cout << Mess << endl;
    cin >> Num;
  } while (Num < From || Num > To);
  return Num;
}
void ShowDaysOfWeek()
{
  cout << "\nPlease Enter Number Of Day:-\n";
  cout << "\n*********************\n";
  cout << "1 - Sunday\n";
  cout << "2 - Monday\n";
  cout << "3 - Tuesday\n";
  cout << "4 - Wednesday\n";
  cout << "5 - Thursday\n";
  cout << "6 - Friday\n";
  cout << "7 - Saturday\n";
  cout << "\n*********************" << endl;
}
string GetDayOfWeek(int Day)
{
  switch (Day)
  {
  case enDayOfWeek::Sun:
    return "It's Sunday\n";
  case enDayOfWeek::Mon:
    return "It's Monday\n";
  case enDayOfWeek::Tue:
    return "It's Tuesday\n";
  case enDayOfWeek::Wed:
    return "It's Wednesday\n";
  case enDayOfWeek::Thu:
    return "It's Thursday\n";
  case enDayOfWeek::Fri:
    return "It's Friday\n";
  case enDayOfWeek::Sat:
    return "It's Saturday\n";
  default:
    return "Wrong Day\n";
  }
}

int main()
{
  ShowDaysOfWeek();
  cout << GetDayOfWeek(ReadInRangeFromTo("Choose:-", 1, 7)) << endl;
  return 0;
}