//Deloped Solution

#include <iostream>
#include <string>
using namespace std;

float ReadPositiveNumber(string message)
{
    float number = 0;
    do
    {
        cout << message << endl;
        cin >> number;
    } while (number <= 0);
    return number;
}
float HoursToDays(float numberOfHours)
{
    return (float)numberOfHours / 24;

}
float hoursToWeeks(float numberOfHours)
{
    return numberOfHours/(24*7);

}
float DaysToWeeks(float NumberOfDays)
{

    return(float)NumberOfDays / 7;
}


int main()
{
    float numberOfHours = ReadPositiveNumber("Please Enter Number Of Hourse ? ");
    float numberOfDays = HoursToDays(numberOfHours);
    float numberOfWeeks = hoursToWeeks(numberOfHours);
    cout << endl;

    cout << "Total Hourse = " << numberOfHours << endl;
    cout << "Total Days = " << numberOfDays << endl;
    cout << "Total weeks = " << numberOfWeeks << endl;
}
