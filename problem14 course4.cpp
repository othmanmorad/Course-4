#include <iostream>
#include<string>
using namespace std;

void ReadNumbers(int& num1, int& num2)
{
    cout << "Enter number 1" << endl;
    cin >> num1;

    cout << "Enter number 2" << endl;
    cin >> num2;

}

void SwapNumber(int& num1, int& num2)
{
    int Temp = num1;
    num1 = num2;
    num2 = Temp;

}
void PrintTwoNumbers(int num1, int num2)
{
    cout << "\n Number one = " << num1 << endl;
    cout << "\n Number tow = " << num2 << endl;
}
int main()
{   
    int num1, num2;

    ReadNumbers(num1, num2);
     
    cout << "Numbers after swap : " << endl;
    PrintTwoNumbers(num1, num2);

    
    SwapNumber(num1, num2);

    cout << "Numbers befor swap : " << endl;
    PrintTwoNumbers(num1, num2);
    
}










