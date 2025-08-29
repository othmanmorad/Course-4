#include <iostream>
#include <string>
using namespace std;
//enum enEvenOrOdd{Odd=1 , Even =2};
//int ReadNumber()
//{
//    int Number;
//    cout << "Enter number : " << endl;
//    cin >> Number;
//    return Number;
//}
//enEvenOrOdd checkEvenOrOdd(int Number)
//{
//    if (Number % 2 == 0)
//        return enEvenOrOdd::Even;
//    else
//        return enEvenOrOdd::Odd;
//}
//int SumOddNumberfrom1ToN_usingWhile(int Number)
//{
//    int sum = 0;
//    int counter = 0;
//    cout << "Sum Even numbers using while Statement : \n " << endl;
//    while (counter <= Number)
//    {
//        counter++;
//        if (checkEvenOrOdd(counter) == enEvenOrOdd::Even)
//        {
//            sum = sum + counter;
//           
//        }
//    }
//      return sum;
//}
//
//
//int SumOddNumberfrom1ToN_usingDoWhile(int Number)
//{
//    int sum = 0;
//    int counter = 0;
//    cout << "Sum Even numbers using Do while Statement : \n " << endl;
//    do
//    {
//        counter++;
//        if (checkEvenOrOdd(counter) == enEvenOrOdd::Even)
//        {
//            sum += counter;
//        }
//
//    } while (counter <= Number);
//    return sum;
//}
//
//
//
//int SumOddNumberfrom1ToN_usingFor(int Number)
//{ 
//    int sum = 0;
//    cout << "Sum Even numbers using for Statement : \n " << endl;
//    for (int counter = 1;counter<=Number; counter++)
//    {
//        if (checkEvenOrOdd(counter) == enEvenOrOdd::Even)
//        {
//            sum = sum + counter;
//        }
//    }
//    return sum;
//}
//
//
//int main()
//{
//    cout << SumOddNumberfrom1ToN_usingWhile(ReadNumber()) << endl;
//    cout << SumOddNumberfrom1ToN_usingDoWhile(ReadNumber()) << endl;
//    cout << SumOddNumberfrom1ToN_usingFor(ReadNumber());
//}



// sum all numbers(odd+Even)
enum enEvenOrOdd { Odd = 1, Even = 2,all =3};
int ReadNumber()
{
    int Number;
    cout << "Enter number : " << endl;
    cin >> Number;
    return Number;
}
enEvenOrOdd checkEvenOrOdd(int Number)
{
    if (Number % 2 == 0)
        return enEvenOrOdd::Even;
    if (Number % 2 != 0)
        return enEvenOrOdd::Odd;
    else
        return enEvenOrOdd::all;
}
int SumAllNumberfrom1ToN_usingWhile(int Number)
{
    int sum = 0;
    int counter = 1;
    cout << "Sum all numbers using while Statement : \n " << endl;
    while (counter <= Number)
    {
       
      
        {
            sum = sum + counter;
            counter++;
        }
    }
    return sum;
}


int SumAllNumberfrom1ToN_usingDoWhile(int Number)
{
    int sum = 0;
    int counter = 1;
    cout << "Sum all numbers using Do while Statement : \n " << endl;
    do
    {
        
      
        {
            sum += counter;
            counter++;
        }

    } while (counter <= Number);
    return sum;
}



int SumAllNumberfrom1ToN_usingFor(int Number)
{
    int sum = 0;
    cout << "Sum all numbers using for Statement : \n " << endl;
    for (int counter = 1;counter <= Number; counter++)
    {
        
       
            sum = sum + counter;
       
    }
    return sum;
}


int main()
{
    cout << SumAllNumberfrom1ToN_usingWhile(ReadNumber()) << endl;
    cout << SumAllNumberfrom1ToN_usingDoWhile(ReadNumber()) << endl;
    cout << SumAllNumberfrom1ToN_usingFor(ReadNumber());
}

