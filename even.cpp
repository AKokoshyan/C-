#include <iostream>
using namespace std;
int main()
{
    int num,rep,tempLen,maxLen,theNumber;
    cin>>num;
    rep = num;
    tempLen=1;
    while(num!=0)
    {
        cin>>num;
        if(num!=0)
        {

            if(num==rep)
            {
                tempLen++;
            }
            else
            {
                if(tempLen>maxLen)
                {
                    maxLen = tempLen;
                    theNumber = rep;
                }
                tempLen = 1;
                rep = num;


            }
        }
    }

    if(tempLen>maxLen)
    {
        maxLen = tempLen;
        theNumber = num;
    }
    cout<<maxLen<<" "<<theNumber<<endl;
    return 0;
}

