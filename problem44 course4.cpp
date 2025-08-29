#include <iostream>
#include <string>
//Devloped Solution
using namespace std;

//enum enDayOfWeek { sunday =1 , monday = 2 , tuesday=3 , wedenesday =4 , thursday =5 , friday =6 , satruday=7};
//
//
//float ReadNumberInRange(string message,int from ,int to)
//{
//    float number = 0;
//    do
//    {
//        cout << message << endl;
//        cin >> number;
//    } while (number < from || number >to);
//    return number;
//}
//
//
//enDayOfWeek ReadDayOfWeek()
//{
//    return (enDayOfWeek )ReadNumberInRange("Please enter day number (sun=1 , mon=2, tue=3, wed=4,thu=5,fri=6,satr=7", 1, 7);
//}
//
//
//
//string GetDayOfWeek(enDayOfWeek day)
//{
//    switch (day)
//    {
//    case  enDayOfWeek::sunday:
//        return "Sunday";
//
//    case  enDayOfWeek::monday:
//        return "Monday";
//
//    case  enDayOfWeek::tuesday:
//        return "Tuesday";
//
//    case  enDayOfWeek::wedenesday:
//        return "Wednesday";
//
//    case  enDayOfWeek::thursday:
//        return "thursday";
//
//    case  enDayOfWeek::friday:
//        return "Friday";
//
//    case  enDayOfWeek::satruday:
//        return "Satruday";
//
//        default:
//            return "Not a valid Day";
//    }
//}
//
//
//
//int main()
//{
//    
//    cout<<GetDayOfWeek (ReadDayOfWeek())<<endl;
//    return 0;
//
//}

enum enDayOfWeek {Satur =1 ,Sun=2 , Mon=3 ,Tue=4 , Wede=5 , Thur=6 , Fri=7    };

int ReadNumberInRange(string message, int from, int to)
{
    float number = 0;
    do
    {
        cout << message << endl;
        cin >> number;
    } while (number < from || number >to);
    return number;
}


enDayOfWeek ReadDayOfWeek()
{

    return (enDayOfWeek)ReadNumberInRange("Please enter Day number Satur =1 ,Sun=2 , Mon=3 ,Tue=4 , Wede=5 , Thur=6 , Fri=7 ", 1, 7);
}

string GetDayOfWeek(enDayOfWeek Day)
{
    switch (Day)
    {
    case enDayOfWeek::Satur:
        return " Satruday";

    case enDayOfWeek::Sun:
        return " Sunday";

    case enDayOfWeek::Mon:
        return " Monday";

    case enDayOfWeek::Tue:
        return " Tuesday";

    case enDayOfWeek::Wede:
        return " Wedenday";

    case enDayOfWeek::Thur:
        return " Thursday";

    case enDayOfWeek::Fri:
        return " Friday";
    }
}
int main()
{

   cout<< GetDayOfWeek(ReadDayOfWeek());

   return 0;
}