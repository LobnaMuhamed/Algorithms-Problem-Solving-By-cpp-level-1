#include "header.h"
// Task Duration In Seconds

/*
// My Solution

int ReadPositiveNumber(string Mess)
{
  int Num;
  do
  {
    cout << Mess << endl;
    cin >> Num;
  } while (Num <= 0);
  return Num;
}

float DaysToHours(int NumOfDays)
{
  return float(NumOfDays * 24);
}
float HoursToMinutes(int NumOfHours)
{
  return float(NumOfHours * 60);
}
float MinutesToSeconds(int NumOfMin)
{
  return float(NumOfMin * 60);
}
int main()
{
  int NumOfDays = ReadPositiveNumber("Please Enter Number Of Days");
  int NumOfHours = ReadPositiveNumber("Please Enter Number Of Hours");
  int NumOfMinutes = ReadPositiveNumber("Please Enter Number Of Minutes");
  int NumOfSeconds = ReadPositiveNumber("Please Enter Number Of Seconds");

  NumOfSeconds += (MinutesToSeconds(HoursToMinutes(DaysToHours(NumOfDays))) +
                  HoursToMinutes(MinutesToSeconds(NumOfHours)) +
                  MinutesToSeconds(NumOfMinutes));
  cout << NumOfSeconds << " Seconds\n";
  return 0;
}
*/

struct strTaskDuration
{
  int NumOfDays, NumOfHours, NumOfMinutes, NumOfSeconds;
};

int ReadPositiveNumber(string Mess)
{
  int Num;
  do
  {
    cout << Mess << endl;
    cin >> Num;
  } while (Num <= 0);
  return Num;
}
strTaskDuration ReadTaskDuration()
{
  strTaskDuration TaskDuration;
  TaskDuration.NumOfDays = ReadPositiveNumber("Please Enter Number Of Days");
  TaskDuration.NumOfHours = ReadPositiveNumber("Please Enter Number Of Hours");
  TaskDuration.NumOfMinutes = ReadPositiveNumber("Please Enter Number Of Minutes");
  TaskDuration.NumOfSeconds = ReadPositiveNumber("Please Enter Number Of Seconds");
  return TaskDuration;
}
int TaskDurationInSeconds(strTaskDuration TaskDuration)
{
  int DurationInSeconds = TaskDuration.NumOfDays * (24 * 60 * 60);
  DurationInSeconds += TaskDuration.NumOfHours * (60 * 60);
  DurationInSeconds += TaskDuration.NumOfMinutes * (60) ;
  DurationInSeconds +=  TaskDuration.NumOfSeconds;
  return DurationInSeconds;
}
int main()
{
  cout << TaskDurationInSeconds(ReadTaskDuration()) << " Seconds" << endl;
  return 0;
}