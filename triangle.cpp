#include <iostream>
using namespace std;
int main()
{
    double firstSide,secondSide,thirdSide;
    cin>>firstSide>>secondSide>>thirdSide;
    if(firstSide+secondSide>thirdSide&&firstSide+thirdSide>secondSide&&secondSide+thirdSide>firstSide)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
    return 0;
}
