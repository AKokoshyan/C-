#include <iostream>
using namespace std;
bool isRepeatingUnsorted(double arr[], int SIZE)
{
    bool isRepeating = false;
    for(int i = 0; i<SIZE -1; i++)
    {
        for(int j = i +1; j<SIZE; j++)
        {
            if(arr[i] == arr[j])
            {
                isRepeating = true;
            }
        }
    }
    return isRepeating;
}
bool isRepaeatingSorted (double arr[], int SIZE)
{
    bool isRepeating = false;
    for(int i =0; i< SIZE-1; i++)
    {
        if(arr[i] == arr[i+1])
        {
            isRepeating = true;
            break;
        }
    }
    return isRepeating;

}
int main()
{
    const int SIZE = 5;
    double arr[SIZE] = {0.5,2.5,1.3,1.7,0.6};
    cout<<isRepaeatingSorted(arr,SIZE)<<endl;
    return 0;
}
