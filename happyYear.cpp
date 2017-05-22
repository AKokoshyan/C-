#include <iostream>
using namespace std;
int main()
{
    int inputNumber,firstNumber,secondNumber,thirdNumber,fourthNumber,counter;
    cin>>inputNumber;
    firstNumber = inputNumber%10;
    secondNumber = (inputNumber/10)%10;
    thirdNumber = (inputNumber/100)%10;
    fourthNumber = inputNumber/1000;
    if(firstNumber==secondNumber||firstNumber==thirdNumber||secondNumber==thirdNumber||secondNumber==fourthNumber||thirdNumber==fourthNumber||firstNumber==fourthNumber)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
    return 0;
}
