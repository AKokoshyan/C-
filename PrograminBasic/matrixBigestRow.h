#include <iostream>
using namespace std;

int bigestRow(int matrix[][3],int SIZE)
{
    int bigestRowIndex;
    int arrayBigestRow[SIZE];
    int sumOfRow =0;
    for (int i = 0; i<SIZE; i++)
    {
        sumOfRow=0;
        for(int j = 0; j<3; j++)
        {
            sumOfRow+=matrix[i][j];
        }
        arrayBigestRow[i] = sumOfRow;
    }

    for(int i = 0; i<SIZE-1; i++)
    {
        if(arrayBigestRow[i] >arrayBigestRow[i+1])
        {
            bigestRowIndex = i;
        }
    }
    return bigestRowIndex;
}


