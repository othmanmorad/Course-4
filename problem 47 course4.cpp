#include <iostream>
#include <string>
using namespace std;

//My solution

int ReadPositiveNumber(string message)
{
    int number;
    
    do
    {
        cout << message<<endl;
        cin >> number;

    } while (number < 0);
    return number;
}
int CalculateTotalMonths(int LoanAmount , int MonthlyPayment)
{
    return  LoanAmount / MonthlyPayment;
    
}
int main()
{
    int LoanAmount = ReadPositiveNumber("Please enter loan Amount :");
    int MonthlyPayment = ReadPositiveNumber("Please enter monthly payment :");

    cout << "\n";
    cout << "\n Total month to pay " << CalculateTotalMonths(LoanAmount, MonthlyPayment) << " month";
    return 0;
}
