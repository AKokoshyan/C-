#include <iostream>
using namespace std;
int main()
{
    const int arrayLenth = 10;
    int counter=0;
    int maxCounter = 0;
    int arrayOne [arrayLenth];
    cout<<"Initialize the elements of the array!"<<endl;
    for (int i = 0; i<arrayLenth; i++)
    {
        cout<<"Enter "<< i+1<<" element :"<<endl;
        cin>>arrayOne[i];
    }
    for(int i = 0; i <arrayLenth -1; i++)
    {
        if(arrayOne[i]==arrayOne[i+1])
        {
            counter++;
        }
        if(arrayOne[i]!=arrayOne[i+1])
        {
            maxCounter = counter;
            counter =0;
        }
    }
    cout<<maxCounter<<endl;
    return 0;
}
