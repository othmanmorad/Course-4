#include <iostream>
#include <string>
using namespace std;

//by refrence
//void ReadMarks(int& mark1, int& mark2, int& mark3)
//{
//    cout << "Enter mark1" << endl;
//    cin >> mark1;
//
//    cout << "Enter mark2" << endl;
//    cin >> mark2;
//
//    cout << "Enter mark3" << endl;
//    cin >> mark3;
//
//}
//
//float SumOf3marks(int mark1, int mark2, int mark3)
//{
//    return(mark1 + mark2 + mark3);
//}
//float calculateAverage(int mark1, int mark2, int mark3)
//{
//    return  SumOf3marks(mark1 , mark2 , mark3)/3;
//}
//void PrintAverage(float Average)
//{
//    cout << "Average = " << Average << endl;
//    if (Average >= 50)
//        cout << "Pass";
//    else
//        cout << "Faile";
//}
//
//int main()
//{
//    int mark1, mark2, mark3;
//    ReadMarks(mark1, mark2, mark3);
//    PrintAverage(calculateAverage(mark1, mark2, mark3));
//
//}

//by array

//void Readmark(int arr[3])
//{
//	for (int i = 0;i < 3;i++)
//	{
//		cout << "Enter mark " << i + 1 << endl;
//		cin >> arr[i];
//	}
//}
//float SumOf3marks(int arr[3])
//{
//	return (arr[0] + arr[1] + arr[2]);
//}
//float  calculateAverage(int arr[3])
//{
//	return (float)SumOf3marks(arr) / 3;
//}
//void printAverage(float Average)
//{
//	cout << "Average = " << Average << endl;
//	if (Average >= 50)
//		cout << "pass";
//	else
//		cout << "Faile";
//}
//int main()
//{
//	int arr[3];
//	Readmark(arr);
//	printAverage(calculateAverage(arr));
//}





// by enum
enum enPassFaile { Pass = 1,Faile=2 };
void ReadMarks(int& mark1, int& mark2, int& mark3)
{
    cout << "Enter mark1" << endl;
    cin >> mark1;

    cout << "Enter mark2" << endl;
    cin >> mark2;

    cout << "Enter mark3" << endl;
    cin >> mark3;

}

float SumOf3marks(int mark1, int mark2, int mark3)
{
    return(mark1 + mark2 + mark3);
}
float calculateAverage(int mark1, int mark2, int mark3)
{
    return  SumOf3marks(mark1, mark2, mark3) / 3;
}
enPassFaile checkAverage(float Average)
{
    if (Average >= 50)
      return  enPassFaile::Pass;
    else
      return enPassFaile::Faile;
    
}
void PrintAverage(float Average)
{
    cout << "Average = " << Average << endl;
    if (checkAverage( Average) ==enPassFaile::Pass)
        cout << "Pass";
    else
        cout << "Faile";
}

int main()
{
    int mark1, mark2, mark3;
    ReadMarks(mark1, mark2, mark3);
    PrintAverage(calculateAverage(mark1, mark2, mark3));

}