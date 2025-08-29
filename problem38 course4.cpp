#include <iostream>
#include <string>
#include<cmath>
using namespace std;

enum enPrimeOrNotPrimeNumber{Prime =1, NotPrime =2};
int ReadPositiveNumber(string message)
{
    int number;
    do {
        cout <<message<< endl;
        cin >> number;
    } while (number < 0);

    return number;
}
enPrimeOrNotPrimeNumber CheckPrimeOrNotPrimeNumber(int number)
{   
    

    if (number < 2)
    {
        return enPrimeOrNotPrimeNumber::NotPrime;
    }
    int m = round(number / 2);
    for (int counter = 2;counter <= m;counter++)
    {
        if (number % counter == 0)
            return enPrimeOrNotPrimeNumber::NotPrime;
    }
    return enPrimeOrNotPrimeNumber::Prime;
}

void PrintSum(int number)
{
    int sum = 0;

    if (CheckPrimeOrNotPrimeNumber(number) == enPrimeOrNotPrimeNumber::Prime)

         sum += number;
    cout << "Sum= " << sum;
}
int main()
{
     PrintSum(ReadPositiveNumber("Please enter positive number"));
    return 0;
}

