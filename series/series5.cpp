#include<iostream>
using namespace std;
int main()
{
    int n,i,pr=2;
    cin>>n;
    cout<<pr<<" ";
    for(i=0;i<n-1;i++)
    {
        pr=(pr*2)-i;
        cout<<pr<<" ";
    }
}