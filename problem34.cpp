#include "header.h"
// Simple Calculator

enum enOperationType
{
  Add = '+',
  Subtract = '-',
  Multiply = '*',
  Divide = '/'
};
float ReadNumber(string Message)
{
  float number = 0;
  cout << Message << endl;
  cin >> number;
  return number;
}
enOperationType ReadOpType()
{
  char OT = '+';
  cout << "Please Enter Operation Type ( + , - , * , / )?\n";
  cin >> OT;
  return enOperationType(OT);
}

float CalculateNums(float A, float B, enOperationType op)
{
  switch (op)
  {
  case enOperationType::Add:
    return float(A + B);
  case enOperationType::Subtract:
    return float(A - B);
  case enOperationType::Multiply:
    return float(A * B);
  case enOperationType::Divide:
    return float(A / B);
  };
  return -1;
};

int main()
{
  float Number1 = ReadNumber("Please Enter First Number:-");
  float Number2 = ReadNumber("Please Enter Second Number:-");
  enOperationType OpType = ReadOpType();
  cout << "Result = " << CalculateNums(Number1, Number2, OpType) << endl;
  return 0;
}