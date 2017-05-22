#include <iostream>
using namespace std;

bool isPrime(int customerNumber)
{
    bool isPrime = true;
    for(int i = 2; i <customerNumber; i++)
    {
        if(customerNumber%i==0)
        {
            isPrime = false;
            break;
        }
    }
    return isPrime;
}
int main()
{
    int customerNumber;
    cout<<"Enter a number and the program will tell you is it prime!\nEnter your number :"<<endl;
    cin>>customerNumber;
    cout<<customerNumber<<" is "<<isPrime(customerNumber)<<endl;
    return 0;
}
