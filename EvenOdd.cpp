#include <iostream>
using namespace std;
int main()
{
    int firstNumber,secondNumber;
    cin>>firstNumber>>secondNumber;
    if(firstNumber%2==0)
    {
        cout<<firstNumber*secondNumber<<endl;
    }
    else
    {
        cout<<firstNumber-secondNumber<<endl;
    }
    return 0;
}
