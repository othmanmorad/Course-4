#include <iostream>
#include <string>
#include <cmath>
using namespace std;

//Devloped Solution
struct strTaskDuration
{
    int NumberOfDays, NumberOfHourss, NumberOfMintus, NumberOfSeconds;
};
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
strTaskDuration SacondsToTaskDuration( int  TotalSaconds)
{
     strTaskDuration  TaskDuration;

     const int SecondsPerDays = 24 * 60 * 60;
     const int SecondsPerHours =  60 * 60;
     const int SecondsPerMintus =  60;

     int Remainder = 0;
     TaskDuration.NumberOfDays = floor(TotalSaconds / SecondsPerDays);
     Remainder = TotalSaconds % SecondsPerDays;

     TaskDuration.NumberOfHourss = floor(Remainder / SecondsPerHours);
     Remainder = Remainder % SecondsPerHours;

     TaskDuration.NumberOfMintus = floor(Remainder / SecondsPerMintus);
     Remainder = Remainder % SecondsPerMintus;

     TaskDuration.NumberOfSeconds = Remainder;

     return TaskDuration;
}
void PrintTaskDurationInDetalis(strTaskDuration  TaskDuration)
{   
    cout << "\n";
    cout << TaskDuration.NumberOfDays << ":" << TaskDuration.NumberOfHourss << ":"
        << TaskDuration.NumberOfMintus << ":" << TaskDuration.NumberOfSeconds;
}

int main()
{
    int TotalSeconds = ReadPositiveNumber("Plese Enter Total Seconds");
    PrintTaskDurationInDetalis(SacondsToTaskDuration(TotalSeconds));
    return 0;
}
