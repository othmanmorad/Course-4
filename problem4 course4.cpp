#include <iostream>
using namespace std;
//my solution
//void ReadAgeDriver(int &age, bool &driverlicense)
//{
//    cout << "Enter age :" << endl;
//    cin >> age;
//
//
//    cout << "do you have driver license yes=1 ,no=0 :" << endl;
//    cin >> driverlicense;
//
//    if (age > 21 && driverlicense == 1)
//    {
//        cout<< " Hired";
//    }
//    else
//    {
//        cout<< " Rejected";
//    }
//}
//
//
//int main()
//{
//    int age;
//        bool driverlicense;
//  
//    ReadAgeDriver(age, driverlicense);
//}

//mohammed's solution
//struct stinfo
//{
//	int age;
//	bool HasDrivinglicense;
//};
//stinfo ReadInfo()
//{
//	stinfo info;
//	cout << "Enter your age :" << endl;
//	cin >> info.age;
//
//	cout << "Do you have driver's license ? :" << endl;
//	cin >> info.HasDrivinglicense;
//	return info;
//}
//bool isAccepted(stinfo info)
//{
//	return(info.age > 21 && info.HasDrivinglicense);
//}
//
//void printresult(stinfo info)
//{
//	if (isAccepted(info))
//		cout << "Hired" << endl;
//	else
//		cout << "Rejectied" << endl;
//}
//int main()
//{
//	printresult(ReadInfo());
//
//}

//my solution
struct stinfo
{
	int age;
	bool HasDRivinglicense;
};
stinfo Readinfo()
{
	stinfo info;
	cout << "Enter your age:" << endl;
	cin >> info.age;

	cout << "Do you have driving's license ?:" << endl;
	cin >> info.HasDRivinglicense;

	return info;
}
bool isAccepted(stinfo info)
{
	return(info.age > 21 && info.HasDRivinglicense);

}
void printresult(stinfo info)
{
	if (isAccepted(info))
		cout << "Hired";
	else 
		cout<<"Rejectied";
}
int main()
{
	printresult(Readinfo());
}