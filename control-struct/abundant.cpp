#include<iostream>
using namespace std;
int main()
{
    int a,sum=0;
    cin>>a;
    for (int i=1;i<=a;i++)
{
    if(a%i==0)
    sum=sum+i;
}
if(a>sum)
cout<<"Abundant number";
else 
cout<<"Not Abundant number";
}