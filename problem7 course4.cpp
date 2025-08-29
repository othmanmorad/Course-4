#include <iostream>
#include<string>
using namespace std;
//int ReadNumber()
//{ 
//    int num;
//    cout << "Enter number :" << endl;
//    cin >> num;
//    return num;
//}
//int FindHalfNumber(int num)
//{
//    int Halfnumber = num / 2;
//    return Halfnumber;
//}
//void printHalfNumber( int Halfnumber)
//{
//    cout << "Half of " << " is " << Halfnumber;
//}
//
//int main()
//{
//    printHalfNumber(FindHalfNumber(ReadNumber()));
//}  

//mohammed's solution
int ReadNumber()
{
    int num;
    cout << "Enter number :" << endl;
    cin >> num;
    return num;
}
float CalculatHalfNumber(int num)
{
    return (float) num / 2;
}
void printResult(int num)
{
    string Result = "Half of " + to_string(num) + " is " + to_string(CalculatHalfNumber(num));
    cout <<endl<< Result << endl;
}

int main()
{
    printResult(ReadNumber());
    return 0;
}
