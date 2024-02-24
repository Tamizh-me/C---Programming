#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a,sum=0,temp,b;
    cin>>a;
    while(a>0)
    {
    b=a%10;
    temp=pow(b,3);
    sum=sum+temp;
    a=a/10;
    }
    if(sum==a)
    {
        cout<<"Armstrong Number";
    }
    else
    {
        cout<<"Not an Armstrong Number";
    }
}
