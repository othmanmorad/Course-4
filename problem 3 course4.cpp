#include <iostream>
using namespace std;
//my solution
//int main()
//{   
//	int num;
//	cout << "Enter number to check if it's even or odd:" << endl;
//	cin >> num;
//	if (num % 2 == 0)
//	{
//		cout << "Number is even ";
//	}
//	else
//	{
//		cout << "Number is odd ";
//	}
//	
//}  

//mohammed's solution
enum enNumberTaype{Odd=1 , Even =2};
int ReadNumber()
{
	int num;
	cout << "Enter number to check if it's Even or Odd " << endl;
	cin>>num;
	return num;
}
enNumberTaype checkNumberTaype(int num)
{
	int Result = num % 2;
	if (Result == 0)
	{
		return enNumberTaype::Even;
	}
	else
	{
		return enNumberTaype::Odd;
	}
}
void PrintNumberTaype(enNumberTaype NumberTaype)
{
	if (NumberTaype==enNumberTaype::Even)
	{
		cout << "\n Number is Even" << endl;
	}
	else
	{
		cout << "\n Number is Odd" << endl;
	}
}
int main()
{

	PrintNumberTaype(checkNumberTaype(ReadNumber()));
}