#include <iostream>
using namespace std;
double convertToCelsius(double fahrenheit)
{
    double celsius = ((fahrenheit -32)*5)/9;
    return celsius;
}
double convertToFahrenheit(double celsius)
{
    double fahrenheit = (9.0/5*celsius) +32;
    return fahrenheit;
}
int main()
{
    int input;
    double customerTemperature;
    double convertedTemperature= 0.0;
    cout<<"Choose option from the menu:"<<endl;
    cout<<"To convert from celsius to fahrenheit press 1"<<endl;
    cout<<"To convert from fahrenheit to celsius press 2"<<endl;
    do
    {
        cin>>input;
           if(input ==1)
        {
            cout<<"Enter temperature in celsius and the program will convert in fahrenheit! "<<endl;
            cin>>customerTemperature;
            convertedTemperature = convertToFahrenheit(customerTemperature);
            cout<<convertedTemperature<<endl;
            cout<<"If you want to exit press 0"<<endl;
        }
        if(input ==2)
        {
            cout<<"Enter temperature in fahrenheit and the program will convert in celsius! "<<endl;
            cin>>customerTemperature;
            convertedTemperature = convertToCelsius(customerTemperature);
            cout<<convertedTemperature<<endl;
            cout<<"If you want to exit press 0"<<endl;
        }


    }
    while(input !=0);
    return 0;
}
