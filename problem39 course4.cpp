#include <iostream>
#include<string>
// Devloped Solution
using namespace std;
float ReadPositiveNumber(string message)
{
    float number;
    do
    {
        cout << message << endl;
        cin >>number;
    } while (number <= 0);
    return number;
}
float CalculatRemainder(float TotalBill, float Cashpaid)
{
    return  Cashpaid- TotalBill;
}
int main()
{   
    float TotalBill = ReadPositiveNumber("Please enter Total bill");

    float CashPaid = ReadPositiveNumber("Please enter cash baid");

    cout << "****************************************" << endl;

    cout <<"Remainder : "<< CalculatRemainder(TotalBill, CashPaid);
}

