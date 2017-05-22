#include <iostream>
using namespace std;
int main()
{
    int leapYear;
    cin>>leapYear;
    if(leapYear%4==0&&leapYear%100!=0||leapYear%400==0)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
    return 0;
}
