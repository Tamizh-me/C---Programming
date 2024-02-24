#include<iostream>
using namespace std;
int main()
{
    int r,c,t;
    cin>>r>>c>>t;
    if(t>r && t<=r*2)
    cout<<"No";
    else if(t>(r*c)-(r*2) && t<=(r*c)-r)
    cout<<"No";
    else{
    cout<<"Yes";
    }
    
    return 0;
}