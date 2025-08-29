#include <iostream>
#include <string>
#include <cmath>
using namespace std;
//my solution
//int ReadNumber()
//{
//    int number;
//    cout << "Enter number " << endl;
//    cin >> number;
//    return number;
//}
//
//int ReadM()
//{
//    int M;
//    cout << "Enter M " << endl;
//    cin >> M;
//    return M;
//}
//
//int powrNum_m(int number, int M)
//{
//    int result =pow(number, M);
//    return result;
//}
//
//int main()
//{
//   cout<< powrNum_m(ReadM(), ReadNumber());
//}

//mohammed's solution by loop;
int ReadNumber()
{
    int number;
    cout << "Enter number " << endl;
    cin >> number;
    return number;
}

int ReadPower()
{
    int M;
    cout << "Enter M " << endl;
    cin >> M;
    return M;
}
int PowerOfM(int number, int M)
{
    if (M == 0)
    {
        return 1;
    }

    int P = 1;
    for (int i = 1;i <= M;i++)
    {
        P = P * number;
    }
    return P;
}
int main()
{


    cout << endl<<"Result:" << PowerOfM( ReadNumber(), ReadPower())<<endl;
    return 0;
}