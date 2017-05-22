#include <iostream>
#include "moveZeroes.h"
using namespace std;

int main()
{
    const int SIZE = 3;
    int arr[SIZE][3] = {{0,0,0},{0,5,6},{0,8,9}};
    moveZeroesToRight(arr,SIZE);

    return 0;
}
