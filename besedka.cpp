#include <iostream>
using namespace std;
int main()
{
    const double pi = 3.14;
    double sideSqr,radius,areaSqr,areaCircle;
    cin>>sideSqr>>radius;
    areaSqr = sideSqr*sideSqr;
    areaCircle = 2*pi*radius;
    if(areaSqr>areaCircle){
        cout<<areaSqr<<endl;
    }else{
    cout<<areaCircle<<endl;
    }
    return 0;
}
