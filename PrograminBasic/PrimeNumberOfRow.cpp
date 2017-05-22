#include <iostream>
using namespace std;


int main()
{
    int customerNumber;
    cout<<"Enter a number and the program will print all prime numbers of the row!"<<endl;
    cin>>customerNumber;

    if(customerNumber == 1||customerNumber==2)
    {
        cout<<cucustomerNumber<<endl;
    }

    for(int i = 3; i<customerNumber; i++)
    {
        for(int j = 2; j<i; j++)
        {
            if(i%j==0)
            {
                continue;
            }
            else
            {
                cout<<j<<" "<<endl;
            }
        }
    }
    return 0;
}
