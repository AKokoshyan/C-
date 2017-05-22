#include <iostream>
using namespace std;
int main()
{
    int yearOfBirth,currentYear,differenceBetweenTheYears;
    cin>>yearOfBirth>>currentYear;
    differenceBetweenTheYears = currentYear - yearOfBirth;
    if(differenceBetweenTheYears<16)
    {
        cout<<"No"<<endl;
    }
    else
    {
        if(differenceBetweenTheYears>=16&&differenceBetweenTheYears<18)
        {
            cout<<"S pridrujitel"<<endl;
        }
        else
        {
            cout<<"Yes"<<endl;
        }
    }
    return 0;
}
