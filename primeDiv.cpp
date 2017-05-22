#include <iostream>
using namespace std;
int main()
{
    int num,divider,flag=0;
    divider = 2;
    cin>>num;
    while(num>1)
    {
        if(num%divider==0)
        {
            if(flag)
            {
                cout<<".";
            }
            else
            {
                flag = 1;
            }
            cout<<divider;
            num/=divider;
        }
        else
        {
            divider++;
        }
    }

    return 0;
}
