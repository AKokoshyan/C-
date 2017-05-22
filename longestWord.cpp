#include <iostream>
using namespace std;
int main()
{
    char c;
    int counter=0,maxCounter=0;
    do
    {
        cin.get(c);
        if(!(c==' '||c=='.'))
        {
            counter++;
        }
        else
        {
            if(counter>maxCounter)
            {
                maxCounter = counter;
                counter = 0;
            }
        }
    }
    while(c!='.');
    cout<<maxCounter<<endl;
    return 0;
}
