#include <iostream>
using namespace std;
int main()
{
    int firstNumber,secondNumber,thirdNumber;
    cin>>firstNumber>>secondNumber>>thirdNumber;
    if(firstNumber>secondNumber&&firstNumber>thirdNumber)
    {
        cout<<firstNumber<<endl;
    }
    else
    {
        if(secondNumber>firstNumber&&secondNumber>thirdNumber)
        {
            cout<<secondNumber<<endl;
        }
        else
        {
            cout<<thirdNumber<<endl;
        }
    }


    return 0;
}
