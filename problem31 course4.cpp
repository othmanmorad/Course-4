#include <iostream>
#include <string>
#include <cmath>

using namespace std;
//my solution
//int ReadNumber()
//{
//    int num;
//    cout << "Enter number " << endl;
//    cin >> num;
//    return num;
//}
//void Power1(int num  )
//{
//    int result1 = pow(num, 2);
//    cout << result1<<endl;
//    int result2 = pow(num, 3);
//    cout << result2<<endl;
//    int result3 = pow(num, 4);
//    cout << result3<<endl;
//}
//
//
//int main()
//{
//    
//   
//    Power1(ReadNumber());
//   
//}



//mohammed's solution

int ReadNumber()
{
    int number;
    cout << "Enter number " << endl;
    cin >> number;
    return number;
}
void Power1_2_3(int number)
{
    int a, b, c;
    a = number * number;
    b = number * number * number;
    c = number * number * number * number;
    cout << a << " " << b << " " << c << endl;
}
int main()
{
    Power1_2_3(ReadNumber());
}