#include <iostream>
#include <string>
using namespace std;

//my solution
//struct stfullName
//{
//    string firstName;
//    string lastName;
//
//};
//stfullName ReadfullName()
//{
//    stfullName name;
//    cout << "Enter first name :" << endl;
//   getline( cin, name.firstName);
//
//    cout << "Enter first name :" << endl;
//    getline(cin, name.lastName);
//
//    return name;
//}
//void printfullName(stfullName name)
//{
//    cout << "Your full name is : " << name.firstName << " " << name.lastName << endl;
//}
//int main()
//{
//    printfullName(ReadfullName());
//}


//mohamed's solution 
struct stinfo 
{
	string firstName;
	string lastName;
	
};
stinfo Readfullname()
{
	stinfo info;
	cout << "Enter first name :" << endl;
	cin >> info.firstName;

	cout << "Enter last name :" << endl;
	cin >> info.lastName;

	
	return info;
}
string GetfullName(stinfo info, bool reversed)
{
	string fullname = "";
	if (reversed)
		fullname = info.lastName + " " + info.firstName ;
	else 
		fullname = info.firstName + " " + info.lastName ;

	return fullname;
}
void printfullName(string fullname )
{
	cout << "\n Your full name is :" << fullname << endl;
	
}
int main()
{
	printfullName(GetfullName(Readfullname(),true));
	return 0;
}