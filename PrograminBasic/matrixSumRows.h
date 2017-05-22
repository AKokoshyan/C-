#ifndef MATRIXSUMROWS_H_INCLUDED
#define MATRIXSUMROWS_H_INCLUDED
#include <iostream>

void printElementsOfTheRow(int matrix[][3],int SIZE)
{
    int sumOfRow = 0;
    for (int i = 0; i<SIZE; i++)
    {
        for(int j = 0; j<SIZE; j++)
        {
            sumOfRow+=matrix[i][j];
        }
        cout<<sumOfRow<<endl;
        sumOfRow=0;
        cout<<endl;
    }
#endif // MATRIXSUMROWS_H_INCLUDED
