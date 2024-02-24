#include<iostream>
using namespace std;
int main()
{int n,even=5,odd=10;
    cin>>n;
    
    for(int i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
        cout<<odd<<"\n";
        odd=odd+50;
        }
        else
        {
        cout<<even<<"\n";
        even=even+10;
        }
    }
}