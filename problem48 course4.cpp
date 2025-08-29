#include <iostream>
#include <string>
using namespace std;

//My Solution
float ReadPositiveNumber(string message)
{
    int number = 0;
    do
    {
        cout << message << endl;
        cin >> number;
    } while (number < 0);
    return number;
}

float TotalMonthlyInstallment(float LoanAmount, float HowManyMonth)
{
    return LoanAmount / HowManyMonth;
}

int main()
{
    float  LoanAmount = ReadPositiveNumber("Please enter Loan Amount");
    float  HowManyMonth = ReadPositiveNumber("How many month you need to settle the loan ?");

    cout << "\n";
    cout << "\n Monthly installment amount " << TotalMonthlyInstallment(LoanAmount, HowManyMonth);
}

