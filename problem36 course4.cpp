#include <iostream>
#include <string>
using namespace std;
 
//my solution
//struct stStatmentContent 
//{
//    int num1;
//    int num2;
//    char OpertionTaype;
//};
//
//stStatmentContent ReadStatmentContent()
//{
//    stStatmentContent StatmentContent;
//
//    cout << "Enter number 1 : " << endl;
//    cin >> StatmentContent.num1;
//
//    cout << "Enter number 2 : " << endl;
//    cin >> StatmentContent.num2;
//
//    cout << "Enter operation type : " << endl;
//    cin >> StatmentContent.OpertionTaype;
//
//    return StatmentContent;
//}
//float CalculatStatment(stStatmentContent StatmentContent)
//{
//    switch (StatmentContent.OpertionTaype)
//    {
//    case '+':
//        return StatmentContent.num1 + StatmentContent.num2;
//
//    case '-':
//        return StatmentContent.num1 - StatmentContent.num2;
//
//    case '*':
//        return StatmentContent.num1 * StatmentContent.num2;
//
//    case '/':
//        return StatmentContent.num1 / StatmentContent.num2;
//    }
//}
//
//int main()
//{
//    cout << "Result = " << CalculatStatment(ReadStatmentContent());
//}


//mohammed's solution
enum enOprtionType{ Add='+' ,Subtract ='-' , Multiply='*', Divide='/' };

float ReadNumbers(string Message)
{
	float number = 0;
	cout << Message;
	cin >> number;
	return number;
}
enOprtionType ReadOpType()
{
	char OT = '+';
	cout << "Enter opertion type ( + , - , * , / )" << endl;
	cin >> OT;
	return (enOprtionType)OT;
}
float Calculate(float num1, float num2, enOprtionType OpType)
{
	switch (OpType)
	{
	case enOprtionType::Add :
			return num1 + num2;

	case enOprtionType::Subtract:
		return num1 - num2;

	case enOprtionType::Multiply:
		return num1 * num2;

	case enOprtionType::Divide:
		return num1 / num2;
	default:	
		return num1 + num2;
	}
}
int main()
{
	float num1 = ReadNumbers("Please enter the first number :");
	float num2 = ReadNumbers("Please enter the second number : ");

	enOprtionType OpType = ReadOpType();

	cout << endl << "Result = " << Calculate(num1, num2, OpType);
	return 0;
}