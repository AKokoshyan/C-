#include <iostream>
using namespace std;
int main()
{
    int input,firstNumber,secondNumber,thirdNumber,sumOfAllNumbers;
    cin>>input;
    firstNumber = input/100;
    secondNumber = (input/10)%10;
    thirdNumber = input%10;
    sumOfAllNumbers = firstNumber+secondNumber+thirdNumber;
    cout<<sumOfAllNumbers<<endl;
    return 0;
}
