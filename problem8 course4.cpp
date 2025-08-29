#include <iostream>
#include<string>
using namespace std;
//mysolution
//enum enmark{Faile =0 , Pass=1};
//int ReadMark()
//{  
//    int mark;
//    cout << "Enter the mark" << endl;
//    cin >> mark;
//    return mark;
//}
//enmark SuccssedOrFaile(int mark)
//{
//    if (mark >= 50)
//        return enmark::Pass;
//    else
//        return enmark::Faile;
//}
//void printResult(int mark)
//{   
//    if (SuccssedOrFaile(mark) == enmark::Pass)
//        cout << "\n You passed " << endl;
//    else
//        cout << "\n You failed";
//}
//int main()
//{
//    printResult(ReadMark());
//} 

//mohammed's solution 
enum enPassFaile { Pass=0,Faile=2 };
int ReadMark()
{
	int mark;
	cout << "Enter the mark" << endl;
		cin >> mark;
	return mark;
}
enPassFaile Checkmark(int mark)
{
	if (mark >= 50)
		return enPassFaile::Pass;
	else
		return enPassFaile::Faile;
}
void PrintResult(int mark)
{
	if (Checkmark(mark) == enPassFaile::Pass)
		cout << "\nYou passed";
	else 
		cout<<"\nYou faileed";
}
int main()
{
	PrintResult(ReadMark());
}