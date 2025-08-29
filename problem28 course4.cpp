#include <iostream>
#include <string>

using namespace std;
//my solution
//int ReadNumber()
//{
//    int Number;
//    cout << "Enter number : " << endl;
//    cin >> Number;
//    return Number;
//}
//int SumOddNumberfrom1ToN_usingFor(int Number)
//{
//    int sum = 0;
//    cout << "Sum odd numbers using for Statement : \n " << endl;
//    for (int i = 1;i < Number;i += 2)
//    { 
//       
//        sum += i;
//    }
//    return sum;
//}
//
//int main()
//{
//    SumOddNumberfrom1ToN_usingFor(ReadNumber());
//}

//my solution and mohammed's solution
enum enEvenOrOdd{Odd=1,Even=2};
int ReadNumber()
{
    int Number;
    cout << "Enter number : " << endl;
    cin >> Number;
    return Number;
}

enEvenOrOdd checkEvenOrOdd(int Number)
{
	if (Number % 2 != 0)
		return enEvenOrOdd::Odd;
	else
		return enEvenOrOdd::Even;
}

int SumOddNumberfrom1ToN_usingWhile(int Number)
{
    int sum = 0;
    int i = 0;
    cout << "Sum odd numbers using while Statement : \n " << endl;
    while (i < Number)
    {   
        i++;
        if (checkEvenOrOdd(i) == enEvenOrOdd::Odd)
        {
           
            sum = sum + i;
            
        }
       
    }

    return sum;
}

int SumOddNumberfrom1ToN_usingDoWhile(int Number)
{
    int sum = 0;
    int i = 0;
    cout << "Sum odd numbers using Do while Statement : \n " << endl;
    do
    {
        i++;
        if (checkEvenOrOdd(i) == enEvenOrOdd::Odd)
        {

            sum = sum + i;

        }

    } while (i < Number);
    return sum;
}


int SumOddNumberfrom1ToN_usingFor(int Number)
{
    int sum = 0;
    cout << "Sum odd numbers using for Statement : \n " << endl;
    for (int i = 1;i <=Number;i++)
    {
        if (checkEvenOrOdd(i) == enEvenOrOdd::Odd)
        {
            sum +=i;
        }
    }
    return sum;
}

int main()
{

    cout << SumOddNumberfrom1ToN_usingWhile(ReadNumber()) << endl;
    cout << SumOddNumberfrom1ToN_usingDoWhile(ReadNumber()) << endl;
   cout<< SumOddNumberfrom1ToN_usingFor(ReadNumber());
}
