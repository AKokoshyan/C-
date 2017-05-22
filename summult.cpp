#include <iostream>
using namespace std;
int main()
{
    int num,sum=0,multiply=1;
    cin>>num;
    while(num!=0)
    {
        if(num%2==0)
        {
            sum+=num;
        }
        else
        {
            multiply*=num;
        }
        cin>>num;
    }
    cout<<sum<<multiply<<endl;
    return 0;
}
