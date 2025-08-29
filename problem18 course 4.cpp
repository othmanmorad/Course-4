#include <iostream>
#include <string>
#include <cmath>
using namespace std;

//my solution
//void ReadNumber(float& r)
//{
//    cout << "Enter r " << endl;
//    cin >> r;
//}
//float CircleArea(float r)
//{
//    return 3.14 * pow(r, 2);
//}
//void PrintArea(float Area)
//{
//    cout << "Area = " << Area << endl;
//}
//int main()
//{
//    float r;
//    ReadNumber( r);
//    PrintArea(CircleArea(r));
//}
 

//mohammed's solution
float ReadRadius()
{
	float r;
	cout << "Enter Radius : " << endl;
	cin >> r;
	return r;
}
float CircleArea(float r)
{
	const float PI = 3.14;
	float Area =PI * pow(r, 2);
	return Area;
}
void printArea(float Area)
{
	cout << "Area = " << Area;
}
int main()
{
	printArea(CircleArea(ReadRadius()));
}