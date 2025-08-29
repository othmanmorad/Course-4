#include <iostream>
#include <string>
using namespace std;

//my solution
//int ReadAge(int from ,int to)
//{
//    int age;
//    do 
//    {
//        cout << "Enter your age between '" << from << "' and '" << to << "' " << endl;
//        cin >> age;
//    } 
//    while (age<from||age>to);
//
//    return age;
//    
//}
//
//bool chckAge(int age,int from ,int to)
//{
//    return (age >= from && age <= to);
//}
//void PrintResult(int age)
//{
//    if (chckAge(age, 18, 45))
//        cout << age << " Is a valid age " << endl;
//    else
//        cout << age << " Is not valid age" << endl;
//       
//}
//int main()
//{ 
//    int from, to;
//   
//    PrintResult(ReadAge(18, 45));
//}


//mohammed's solution
int ReadAge()
{   
	int age;
	cout << "Enter your age " << endl;
	cin >> age;
	return age;
}
bool ValidateNumberInRange(int Number, int from, int to)
{
	return (Number >= from && Number <= to);
}
int ReadUntileAgeBetween(int from ,int to)
{   
	int Age = 0;
	do
	{ 
		
		Age=ReadAge();
	} while (!ValidateNumberInRange(Age ,from, to));
	return Age ;
}
void PrintAge(int age)
{
	cout << "Your age is " << age;
}
int main()
{

	PrintAge(ReadUntileAgeBetween(18,45));
	return 0;

}