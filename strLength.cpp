#include <iostream>
using namespace std;
//int substrOne(char str1[],char str2[])
//{
//    int index = -1;
//    int checkLenght = 1;
//    int firstLenth = strLength(str1);
//    int secondLenght = strLenght(str2);
//
//    for(int i = 0; i<firstLenth; i++)
//    {
//        for(int j = 0; j<secondLength; j++)
//        {
//            if(str1[i] == str2[j])
//            {
//                i = j;
//                if(checkLenght == 1)
//                {
//                    index = i;
//                }
//                checkLenght++;
//            }
//            if(checkLenght == secondLenght)
//            {
//                return index;
//            }
//            else
//            {
//                break;
//            }
//
//        }
//    }
//
//    return -1;
//}
//int strCamp(char str1[],char str2[])
//{
//    int proverka = 0;
//    int firstLenth = strLength(str1);
//    int secondLenth = strLength(str2);
//    if(firstLenth > secondLenth)
//    {
//        proverka = firstLenth;
//    }
//    else
//    {
//        proverka=secondLenth;
//    }
//    int isEqual = 0;
//    for(int i = 0; i<proverka; i++)
//    {
//        if(str1[i]==str2[i])
//        {
//            continue;
//        }
//        else if(str1[i]>str2[i])
//        {
//            isEqual = 1;
//            break;
//        }
//        else if (str1[i]<str2[i])
//        {
//            isEqual = -1;
//            break;
//        }
//    }
//    return isEqual;
//}
int strLength (char str[])
{
    int counter = 0;
    while(str[counter]!='\0')
    {
        counter++;
    }
    return counter;
}
void testLenth(char str[],char str1[])
{
    int lenthOne = strLength(str);
    int lenthTwo = strLength(str1)
                   if(lenthOne == lenthTwo)
    {
        cout<<"Test pass!"<<endl;
    }
    else
    {
        cout<<"Test failed!"<<endl;
    }

}


int main()
{
    int arrLenth;
    char stringOne[] = "hello";
    char stringTwo[] = "worldd";

    testLenth(stringTwo,stringOne);
    cout<<arrLenth<<endl;
    return 0;
}
