#include <iostream>
using namespace std;
int main()
{
    int children,cakeSlices,cakes;
    cin>>children>>cakeSlices;
    cakes=children%cakeSlices ==0?children/cakeSlices:children/cakeSlices +1;
    cout<<cakes<<endl;
    return 0;
}
