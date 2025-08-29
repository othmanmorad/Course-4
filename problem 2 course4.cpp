#include <iostream>
#include<string>
using namespace std;

//my solution
//void outpotName(string name)
//{
//    //string name;
//    cout << "Enter your name:" << endl;
//    getline(cin,name);
//}
//int main()
//{
//    string name;
//    outpotName(name);
//}

//mohammed's solution
string ReadName()
{  
    string name;
    cout << "Please Enter your name :" << endl;
    getline(cin, name);
    return name;
}
void PrintName(string name)
{
    cout << " \n Your name is :"<< name << endl;
}
int main()
{
    PrintName(ReadName());
}