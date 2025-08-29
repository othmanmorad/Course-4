#include <iostream>
#include <string>
using namespace std;
//my solution
void PrintLetterAtoZ()
{
    for (int counter = 65; counter <= 90; counter++)
    {
        cout << (char)counter << endl;
    }
}

int main()
{
    PrintLetterAtoZ();
    return 0;
}

