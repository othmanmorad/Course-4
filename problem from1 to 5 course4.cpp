//This is my solution Im vary happy!!!
#include <iostream>
#include <string>

using namespace std;
//problem1
//void printName( string name)
//{
//    cout << "\n Your name is" << name;
//
//}
//int main()
//{
//    printName(" Raed \n");
//    printName(" salih ");
//} 

//problem2
// 
//string ReadName()
//   
//	string name;
//	cout << "Enter your name :" << endl;
//	getline(cin, name);
//	return name;
//
//void printName(string name)
//{
//	 cout << "\n Your name is :" << name << endl;
//}
//int main()
//{
//	 printName(ReadName());
//	 printName(ReadName());
//	 return 0;
//}  


//problem3
//enum ennumbertaype { odd = 1,even=2 };
//
//
//int ReadNumber()
//{   
//	int number;
//	cout << "Enter number to chcek if it's even or odd" << endl;
//	cin >> number;
//	return number;
//}
// ennumbertaype checkEvenOrOdd(int number)
//{
//	int result = number % 2;
//
//	if (result == 0)
//	{ 
//		return ennumbertaype::even;
//
//	}
//	else
//	{
//		return ennumbertaype::odd;
//	}
// }
//
//	void printresult(ennumbertaype numbertaype)
//	{
//		if (numbertaype == ennumbertaype::even)
//		{
//			cout << "number is even";
//	    }
//		else
//		{
//			cout << "number is odd";
//		}
//	}
//
//	int main()
//	{
//
//		printresult(checkEvenOrOdd(ReadNumber()));
// //   }  


//problem4
//struct stinfo 
//{
//	int age;
//	bool HasDrivingLicense;
//
//};
//stinfo Readinfo()
//{
//	stinfo info;
//	cout << "Enter your age :" << endl;
//	cin >> info.age;
//
//	cout << "Do you have Driving license ? :" << endl;
//	cin >> info.HasDrivingLicense;
//
//	return info;
//}
//int isAccepted(stinfo info)
//{
//	return(info.age > 21 && info.HasDrivingLicense);
//}
//void printresult(stinfo info)
//{
//	if (isAccepted(info))
//	{
//		cout << "Hired";
//	}
//	else
//	{
//		cout << "Rejected";
//	}
//}
//int main()
//{
//	printresult(Readinfo());
//
//	return 0;
//}

//problem5
struct stinfo
{
	int age;
	bool HasDrivingLicense;
	bool HasRecommendation;
};
stinfo Readinfo()
{
	stinfo info;
	cout << "Enter your age :" << endl;
	cin >> info.age;

	cout << "Do you have Driving license ? :" << endl;
	cin >> info.HasDrivingLicense;

	cout << "Do you have Recommendation ? :" << endl;
	cin >> info.HasRecommendation;

	return info;
}
int isAccepted(stinfo info)
{
	if (info.HasRecommendation)
	{
		cout << true;
	}
	else
	{
		return(info.age > 21 && info.HasDrivingLicense);
	}
}
void printresult(stinfo info)
{
	if (isAccepted(info))
	{
		cout << "Hired";
	}
	else
	{
		cout << "Rejected";
	}
}
int main()
{
	printresult(Readinfo());

	return 0;
}