#include <iostream>
using namespace std;
int main()
{
    int input;
    cout<<"Enter a positive number and the program will print all even numbers of the row!"<<endl;
    do
    {
        cin>>input;
        for(int i = 1; i <=input; i++)
        {
            if(i%2==0)
            {
                cout<<i<<endl;
            }
        }

    }
    while(input<=0);
    return 0;
}
