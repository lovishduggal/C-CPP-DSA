// Define a function to find the highest value digit in a given number.
#include<iostream>
using namespace std;
int greatest(int);
int main()
{
    int N,result;
    cout<<"Enter Number:";
    cin>>N;
    result = greatest(N);
    cout<<"The greatest digit in Number is:"<<result;

    return 0;
}
int greatest(int Num)
{
    int greatNum,flag=1,digit;
    while (Num)
    {
        digit=Num % 10;

        if(flag)
        {
           greatNum = digit;
           flag=0;
        } 

        if(greatNum < digit)
        {
           greatNum=digit;
        }

        Num=Num / 10;
    }
     return greatNum;
}