#include "header.h"
// Seconds to Days Hours Minutes Seconds

struct stNumOfSeconds {
  int NumOfDays, NumOfHours, NumOfMinutes, NumOfSeconds;
};
int ReadPositiveNum(string Mess)
{
  int Num;
  do
  {
    cout << Mess << endl;
    cin >> Num;
  } while (Num <= 0);
  return Num;
}
stNumOfSeconds SecondsToTaskDuration(int TotalSeconds)
{
  stNumOfSeconds TaskDuration;
  const int SecondsPerDays = 60 * 60 * 24;
  const int SecondsPerHours = 60 * 60;
  const int SecondsPerMinutes = 60;

  int Reminder = 0;
  TaskDuration.NumOfDays = floor(TotalSeconds / SecondsPerDays);
  Reminder = TotalSeconds % SecondsPerDays;
  TaskDuration.NumOfHours = floor(Reminder / SecondsPerHours);
  Reminder = Reminder % SecondsPerHours;
  TaskDuration.NumOfMinutes = floor(Reminder / SecondsPerMinutes);
  Reminder = Reminder % SecondsPerMinutes;
  TaskDuration.NumOfSeconds = Reminder;
  return TaskDuration;
}
void PrintResult(stNumOfSeconds TaskDuration)
{
  cout << TaskDuration.NumOfDays << " Days.\n";
  cout << TaskDuration.NumOfHours << " Hours.\n";
  cout << TaskDuration.NumOfMinutes << " Minutes.\n";
  cout << TaskDuration.NumOfSeconds << " Seconds.\n"; 
}
int main()
{
  int TotalSeconds = ReadPositiveNum("Please Enter Total Seconds:-");
  PrintResult(SecondsToTaskDuration(TotalSeconds));
  return 0;
}