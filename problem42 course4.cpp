#include <iostream>
#include <string>
//Develped Solution
using namespace std;
struct strTaskDuration
{
    int NumberOfDays , NumberOfHours, NumberOfMintus ,NumberOfSeconds;

};
int  ReadPositiveNumber(string message)
{
    float number = 0;
    do
    {
        cout << message << endl;
        cin >> number;
    } while (number <= 0);
    return number;
}
strTaskDuration ReadTaskDuration()
{
    strTaskDuration TaskDuration;

    TaskDuration.NumberOfDays = ReadPositiveNumber("Pleas enter number of   Days  " );
    TaskDuration.NumberOfHours = ReadPositiveNumber("Pleas enter number of  Hours ");
    TaskDuration.NumberOfMintus = ReadPositiveNumber("Pleas enter number of Mintus ");
    TaskDuration.NumberOfSeconds = ReadPositiveNumber("Pleas enter number of Seconds ");
    
    return   TaskDuration;
}
float  TaskDurationInSeconds(strTaskDuration TaskDuration)
{ 
    int DurationInSeconds = 0;

    DurationInSeconds = TaskDuration.NumberOfDays * 24 * 60 * 60;

    DurationInSeconds += TaskDuration.NumberOfHours * 60 * 60;

    DurationInSeconds += TaskDuration.NumberOfMintus * 60;
    DurationInSeconds +=   TaskDuration.NumberOfSeconds;

    return DurationInSeconds;
}

int main()
{
    cout << "\n Task Duration in Seconds : " << TaskDurationInSeconds(ReadTaskDuration());
}

