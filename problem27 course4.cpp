#include <iostream>
#include <string>
using namespace std;

int ReadNumber()
{
    int Number;
    cout << "Enter number :" << endl;
    cin >> Number;
    return Number;
}
void PrintRangeFromNtoo1_UsingWhile(int Number) 
{
    cout << "Range printed using While statement" << endl;
    int i = Number;
    while (i > 0)
    {
        cout << i << endl;
        i--;
    }
}


void PrintRangeFromNtoo1_UsingDoWhile(int Number) 
{
    cout << "Range printed using Do While statement" << endl;
    int i = Number;
    do
    {
        cout << i << endl;
        i--;
    } while (i > 0);
}

void  PrintRangeFromNtoo1_UsingFor(int Number)
{
    cout << "Range printed using For statement" << endl;
    for (int i = Number;i > 0;i--)
    {
        cout << i << endl;
    }

}


int main()
{
    int n = ReadNumber();
    PrintRangeFromNtoo1_UsingWhile(n);
    PrintRangeFromNtoo1_UsingDoWhile(n);
    PrintRangeFromNtoo1_UsingFor(n);
    return 0;
}

