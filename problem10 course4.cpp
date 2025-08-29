#include <iostream>
#include<string>
using namespace std;
//my solution
//by refrence
void ReadNumbers(int& mark1, int& mark2, int& mark3)
{
    cout << "Enter mark1 : " << endl;
    cin >> mark1;

    cout << "Enter mark2 : " << endl;
    cin >> mark2;

    cout << "Enter mark3 : " << endl;
    cin >> mark3;

}
float SumOf3marks(int mark1, int mark2, int mark3)
{

    return (mark1 + mark2 + mark3);
}
  float calculateAverage(int mark1, int mark2, int mark3)
 {
 
  return (float)SumOf3marks(mark1, mark2, mark3)/3;
 
 
 }
void Printsum(float Avg)
{
    cout << "Average = " << Avg;
}
int main()
{
    int mark1, mark2, mark3;
    ReadNumbers(mark1, mark2, mark3);
    Printsum(calculateAverage(mark1, mark2, mark3));
    return 0;
}


//problem 10 by array
//void ReadNumbers(int arr[3])
//{
//	for (int i = 0;i < 3; i++)
//	{
//		cout << "Enter mark " << i + 1 << endl;
//		cin >> arr[i];
//	}
//}
//float calculatesum(int arr[3])
//{
//	return(arr[0] + arr[1] + arr[2]) / 3;
//}
//void PrintAvg(float avg)
//{
//	cout << "Average = " << avg << endl;
//}
//int main()
//{
//	int arr[3];
//	ReadNumbers(arr);
//	PrintAvg(calculatesum(arr));
//}

