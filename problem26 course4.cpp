#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int ReadNumber()
{   
    int Number;
    cout << "Enter number : " << endl;
    cin >> Number;
    return Number;
}
void  PrintRangeFrom1tooN_UsingWhile(int Number)
{
    cout << "Range printed using While statement" << endl;
    int i = 1;
    while (i <= Number)
    {
        cout << i << endl;
        i++;

    }
}

void  PrintRangeFrom1tooN_UsingDoWhile(int Number)
{
    cout<< "Range printed using Do While statement" << endl;
    int i = 1;
        do
        {
            cout << i << endl;
            i++;
        } while (i <= Number);
}

void PrintRangeFrom1tooN_UsingFor(int Number)
{    
    cout << "Range printed using for statement" << endl;
    for (int i = 1;i <= Number;i++)
    {
        cout<<i<<endl;
    }
}

int main()
{
    PrintRangeFrom1tooN_UsingWhile(ReadNumber());
    PrintRangeFrom1tooN_UsingDoWhile(ReadNumber());
    PrintRangeFrom1tooN_UsingFor(ReadNumber());
}

