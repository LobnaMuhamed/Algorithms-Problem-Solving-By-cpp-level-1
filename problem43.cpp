#include "header.h"
// Month Of Year

enum enMonthOfYear
{
  Jan = 1,
  Feb = 2,
  Mar = 3,
  Apr = 4,
  May = 5,
  Jun = 6,
  Jul = 7,
  Aug = 8,
  Sep = 9,
  Oct = 10,
  Nov = 11,
  Dec = 12,
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
void ShowMonthsOfYear()
{
  cout << " Choose Months Of Year:-\n";
  cout << " ************************ \n";
  cout << "1) Jenuary\n";
  cout << "2) February\n";
  cout << "3) March\n";
  cout << "4) Apirl\n";
  cout << "5) May\n";
  cout << "6) June\n";
  cout << "7) July\n";
  cout << "8) Auguest\n";
  cout << "9) September\n";
  cout << "10) October\n";
  cout << "11) November\n";
  cout << "12) December\n";
  cout << " ************************ " << endl;
}
enMonthOfYear ReadMonthOfYear()
{
  int MonthOfYear = ReadInRangeFromTo("Please Enter Number Of Month", 1, 12);
  return enMonthOfYear(MonthOfYear);
}
string GetMonthOfYear(enMonthOfYear Month)
{
  switch (Month)
  {
  case enMonthOfYear::Jan:
    return "It's January\n";
  case enMonthOfYear::Feb:
    return "It's Feberuary\n";
  case enMonthOfYear::Mar:
    return "It's March\n";
  case enMonthOfYear::Apr:
    return "It's April\n";
  case enMonthOfYear::May:
    return "It's May\n";
  case enMonthOfYear::Jun:
    return "It's June\n";
  case enMonthOfYear::Jul:
    return "It's July\n";
  case enMonthOfYear::Aug:
    return "It's Auguest\n";
  case enMonthOfYear::Sep:
    return "It's September\n";
  case enMonthOfYear::Oct:
    return "It's October\n";
  case enMonthOfYear::Nov:
    return "It's November\n";
  case enMonthOfYear::Dec:
    return "It's December\n";
  default:
    return "It's A Wrong Month\n";
  }
}
int main()
{
  ShowMonthsOfYear();
  cout << GetMonthOfYear(ReadMonthOfYear());
  return 0;
}