#include <iostream>
using namespace std;
int main()
{
    int input,counter,hour;
    cin>>input;
    counter = input/12;
    hour = input%12==0?12:input%12;
    cout<<counter<< ' '<<hour<<endl;
    return 0;
}
