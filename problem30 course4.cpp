#include <iostream>
#include <string>
using namespace std;

int ReadNumber()
{
    int num;
    cout << "Enter number:" << endl;
    cin >> num;
    return num;
}

//int Findfactoril(int num)
//{
//    int fact = 1;
//    for (int counter= 1;counter <= num;counter++)
//        fact = fact * counter;
//    return fact;
//}



//int Findfactoril(int num)
//{
//    int counter = 1;
//    int fact = 1;
//    while (counter <= num)
//    {
//      
//        fact = fact * counter;
//        counter++;
//    }
//    return fact;
//}

int Findfactoril(int num)
{
    int fact = 1;
    int counter = 1;
    do
    {
        fact *= counter;
        counter++;

    } while (counter <= num);
    return fact;
}

int main()
{
    cout << Findfactoril(ReadNumber());
}

