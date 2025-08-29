#include <iostream>
#include<string>
using namespace std;
//Devloped Solution
float ReadPositiveNumber(string message)
{
    float number=0;
    do
    {
        cout << message << endl;
        cin >> number;
    } while (number <= 0);
    return number;
}

float TotalBillAfterServiceAndTax(float TotalBill)
{
    TotalBill= TotalBill*1.1;
    TotalBill = TotalBill * 1.16;

    return  TotalBill;
}

int main()
{   
    
    float TotalBill =ReadPositiveNumber("Please enter total bill ");
    
    cout << endl;

    cout << "Total Bill = " << TotalBill<<endl;

    cout << "Total bill after service and Tax  is " << TotalBillAfterServiceAndTax(TotalBill) << endl;
}

