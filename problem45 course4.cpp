#include <iostream>
#include <string>
using namespace std;

//My Solution

enum enMonthOfYear
{
    January = 1, Fepruary = 2, March = 3, April = 4, May = 5, June = 6, July = 7, August = 8, September = 9, October = 10, November = 11, December = 12
};


int ReadNumberInRange(string message , int from , int to)
{
    int number;
    do
    {
    
        cout << message << endl;
        cin >> number;
    } while (number < from || number > to);

        return number;
} 

enMonthOfYear ReadMonthOfYear()
{
    return (enMonthOfYear)ReadNumberInRange("Please enter a month [1 to 12] : ", 1, 12);
}



string GetMonthOfYear(enMonthOfYear Month)
{
    switch (Month)
    { 
    case enMonthOfYear::January:
        return " January";
       
    case enMonthOfYear::Fepruary:
        return " Fepruary";

    case enMonthOfYear::March:
        return " March";

    case enMonthOfYear::April:
        return " April";

    case enMonthOfYear::May:
        return " May";

    case enMonthOfYear::June:
        return " June";

    case enMonthOfYear::July:
        return " July";

    case enMonthOfYear::August:
        return " Auguset";

    case enMonthOfYear::September:
        return " September";

    case enMonthOfYear::October:
        return " October";

    case enMonthOfYear::November:
        return " November";

    case enMonthOfYear::December:
        return " December";

    default :
        return"Not a valid Month";
    }
}
int main()
{
    cout << GetMonthOfYear(ReadMonthOfYear())<<endl;
    return 0;
}

