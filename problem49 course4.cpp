#include <iostream>
#include <string>
using namespace std;
//my solution
//int ReadPositiveNumber(string message)
//{
//    int number;
//    do
//    {
//        cout << message << endl;
//        cin >> number;
//    } while (number < 0);
//    return number;
//}
//string CheckPIN(int PIN)
//{
//    if (PIN == 1234)
//        return "Your balance is 7500";
//    else
//        return "Wrong PIN";
//}
//int main()
//{
//    cout << CheckPIN(ReadPositiveNumber("Please enter PIN :"));
//}

///mohammed 's solution 
string ReadPINCode()
{
	string PINCode;
	cout << "Please Enter PIN code \n ";
	cin >> PINCode;

	return PINCode;
}

bool Login()
{
	string PINCode;

	do
	{
		PINCode = ReadPINCode();
		if (PINCode == "1234")
		{
			return true;
		}
		else
		{
			cout << "\n Wrong PIN \n";
			system("color 4f");
		}
	} while (PINCode != "1234");

	return false;
}
int main()
{
	if (Login());
	{
		system("color 2f");
		cout << "\n your account balance is " << 7500 << '\n';
	}
	return 0;
}