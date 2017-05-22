#include <iostream>
using namespace std;
int main()
{
    int inputNumber,firstNumber,secondNumber,thirdNumber;
    cin>>inputNumber;
    firstNumber=inputNumber%10;
    secondNumber=(inputNumber/10)%10;
    thirdNumber = inputNumber/100;
    cout<<firstNumber+secondNumber+thirdNumber<<endl;
    return 0;
}
