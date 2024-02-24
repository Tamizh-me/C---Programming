#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int i,d=0,c=0,e=0;
    float o=0,k,g;
    while(i!=-1)
     {
        cin>>i;
        if(i> 0){
        if(i%2!=0)
        {
           o=o+i;
           c=c+1;
        }
        else{
           e=e+i;
           d=d+1;
        }
        }
    }
    cout<<e<<"\n";
    cout<<o<<"\n";
    k=e/d;
    g=o/c;
    cout<<fixed<<setprecision(2)<<k<<"\n\n";
    cout<<fixed<<setprecision(2)<<g;
}