#include <iostream>
using namespace std;
void printSumAllElements(int arr[][3],int SIZE)
{
    int sumAll = 0;
    for(int i = 0; i<SIZE; i++)
    {
        for(int j = 0; j<3; j++)
        {
            sumAll+=arr[i][j];
        }
    }
    cout<<"The sum of all elements is : "<< sumAll<<endl;
}
int main()
{
    const int SIZE = 3;
    int arr[SIZE][3] = {{1,2,3},{4,5,6},{7,8,9};
        printSumAllElements(arr,SIZE);
        return 0;
    }
