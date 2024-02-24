#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a=1,b=2,c;
    for(int i=1;i<=n;i++)
    {
        cout<<a<<" ";
        c=a+b;
        a=b;
        b=c;
        
    }
}