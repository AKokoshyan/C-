#include <iostream>
using namespace std;
int main()
{
    int num,factorical=1;
    cin>>num;
    for(int i = 1; i<num; i++)
    {
        factorical*=i;
    }
    cout<<factorical<<endl;
    return 0;
}
