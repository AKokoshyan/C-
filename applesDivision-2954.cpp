#include <iostream>
using namespace std;
int main()
{
    int student,apples,studentsWithOneMoreApple, result;
    cin>>student>>apples;
    studentsWithOneMoreApple = apples%student;
    result = (apples/student==0)?0:student-studentsWithOneMoreApple;
    cout<<result<<endl;

    return 0;
}
