#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    double lengthRoom,heightRoom,areaCoverdPerBucket,area;
    int totalBucketsPaint;
    cin>>lengthRoom>>heightRoom>>areaCoverdPerBucket;
    area = lengthRoom*heightRoom;
    totalBucketsPaint = ceil(area/areaCoverdPerBucket);
    cout<<totalBucketsPaint<<endl;
    return 0;
}
