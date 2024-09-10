#include "header.h"
// Read Name & Print It
string ReadName()
{
    cout << "Please Enter Your Name: \n";
    string name;
    getline(cin, name);
    return name;
}
void PrintName(string name)
{
    cout << "Your Name is: " << name << endl;
}
