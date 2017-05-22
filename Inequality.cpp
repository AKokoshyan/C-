#include <iostream>
using namespace std;
int main()
{
    int firstNumber,secondNumber,thirdNumber,firstInequality,secondInequality,thirdInequality;
    cin>>firstNumber>>secondNumber>>thirdNumber;
    firstInequality = 7-(firstNumber+1);
    secondInequality = 7-(secondNumber+1);
    thirdInequality = 7-(thirdNumber+1);
    if(firstInequality>=2&&secondInequality>=2&&thirdInequality>=2)
    {
        cout<<"No solution"<<endl;
    }
    else
    {
        if((firstInequality > secondInequality||firstInequality>thirdInequality )&& firstInequality<2 )
        {
            cout<<firstNumber<<endl;
        }
        if((secondInequality > thirdInequality ||secondInequality>firstInequality)&& secondInequality<2)
        {
            cout<<secondNumber<<endl;
        }
        if((thirdInequality > firstInequality|| thirdInequality>secondInequality)&&thirdInequality<2)
        {
            cout<<thirdNumber<<endl;
        }
    }
    return 0;
}
