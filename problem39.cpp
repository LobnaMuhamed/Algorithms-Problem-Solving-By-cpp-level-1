#include "header.h"
// Weeks & Days

float ReadPositiveNumber(string Mess)
{
  int Num;
  do
  {
    cout << Mess << endl;
    cin >> Num;
  } while (Num <= 0);
  return Num;
}
float HoursToDays(float NumberOfHours)
{
  return float(NumberOfHours / 24);
}
float HoursToWeeks(float NumberOfHours)
{
  return float(NumberOfHours / (24 * 7));
}
float DaysToWeeks(float NumberOfDays)
{
  return float(NumberOfDays / 7);
}
int main()
{
  float NumberOfHours = ReadPositiveNumber("Please Enter Number of Hours:-");
  float NumberOfDays = HoursToDays(NumberOfHours);
  float NumberOfWeeks = DaysToWeeks(NumberOfDays);

  cout << "\nTotal Hours = " << NumberOfHours << endl;
  cout << "Total Days = " << NumberOfDays << endl;
  cout << "Total Weeks = " << HoursToWeeks(NumberOfHours) << endl; 
  return 0;
}