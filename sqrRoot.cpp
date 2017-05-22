#include <iostream>
using namespace std;
int main()
{
    float firstNumber,secondNumber,x;
    cin>>firstNumber>>secondNumber;
    if(firstNumber==0)
    {
        if(secondNumber == 0)
        {
            cout<<"Every x is an answer!"<<endl;
        }
        else
        {
            cout<<"No answer for x!"<<endl;
        }
    }
    else
    {
        x = secondNumber/firstNumber;
        cout<<"x = "<<x<<endl;
    }
    return 0;
}
