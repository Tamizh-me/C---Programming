#include<iostream>
using namespace std;
int main()
{
    int a ,sum=0,b;
    int temp=a;
    cin>>a;
   while(a>0)
    {
        b=a%10;
        sum=sum+b;
        a=a/10;
    }if(temp%sum==0)
    {
        cout<<"Harshard number";
    }else{
    cout<<"Not  Harshard number";}
    
}