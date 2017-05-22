#include <iostream>
using namespace std;
int main()
{
    const float pi = 3.14;
    float a,r,sqrArea,circleArea;
    cin>>a>>r;
    sqrArea = a*a;
    circleArea = pi*r*r;
    if(sqrArea>circleArea)
    {
        cout<<sqrArea<<endl;
    }
    else
    {
        cout<<circleArea<<endl;
    }

    return 0;
}
