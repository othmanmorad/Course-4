#include <iostream>
#include <string>
using namespace std;

//Devloped Solution
string ReadPinCode()
{
    string PinCode;
    cout << "Please enter Pin code" << endl;
    cin >> PinCode;
    return PinCode;
}
bool Login()
{
    string PinCode;
    int counter = 3;
    do
    {
        counter--;
        PinCode = ReadPinCode();
        if (PinCode == "1234")
        {
            return true;
        }
        else 
        {
            cout << "Wrong Pin Code " << counter<<" more trise\n";
           
        }


    } while (counter>=1&&PinCode!="1234");

    return false;
}
int main()
{

    if(Login())
    {
        system("color 2f");
        cout << "\nYour blance is " << 7500 << endl;
    }
    else
    {
        system("color 4f");
        cout << "\nYour card is blocked . call the bank for help.\n";
    }
    return 0;
}

