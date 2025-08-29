#include <iostream>
#include <string>
using namespace std;
//This all my solution

//by refrence
//void ReadNumbers(int& num1, int& num2)
//{
//    cout << "Enter number 1" << endl;
//    cin >> num1;
//
//    cout << "Enter number 2" << endl;
//    cin >> num2;
//}
//int FindMaxNumber(int num1, int num2)
//{
//    if (num1 > num2)
//        return num1;
//    else
//        return num2;
//}
//void printMaxNumber(int Max)
//{
//    cout << " \n The Maximum number is : " << Max;
//}
//int main()
//{
//    int num1, num2;
//    ReadNumbers(num1, num2);
//    printMaxNumber(FindMaxNumber(num1, num2));
//}



//by array
//void ReadNumbers(int arr[2])
//{ 
//    for (int i = 0; i < 2;i++)
//    {
//        cout << "Enter number " << i + 1 << endl;
//        cin >> arr[i];
//    }
//   
//}
//int FindMaxNumber(int arr[2])
//{
//    if (arr[0] > arr[1])
//        return arr[0];
//    else
//        return arr[1];
//}
//void printMaxNumber(int Max)
//{
//    cout << "Max number is : " << Max;
//}
//int main()
//{
//    int arr[2];
//    ReadNumbers(arr);
//    printMaxNumber(FindMaxNumber(arr));
//}





//by enum
enum enMaxNumber{num1=1,num2=2};
void ReadNumbers(int& num1, int& num2)
{
    cout << "Enter number 1" << endl;
    cin >> num1;

    cout << "Enter number 2" << endl;
    cin >> num2;
}
int FindMaxNumber(int num1, int num2)
{
    if (num1 > num2)
        return num1;
    else
        return num2;
}
void printMaxNumber(int Max)
{
    if (FindMaxNumber(num1, num2) == enMaxNumber::num1)
        cout << "Max number is : " << Max;
    else
        cout << "Max number is :" << Max;
}
int main()
{
    int num1, num2;
    ReadNumbers(num1, num2);
    printMaxNumber(FindMaxNumber(num1, num2));
}
