#include <iostream>
using namespace std;
int main()
{
    int x,y,sum;
    cin>>x>>y;
    if(x%2==0)
    {
        sum = x*y;
        cout<<sum<<endl;
    }
    else
    {
        sum = x-y;
              cout<<sum<<endl;
    }
    return 0;
}
