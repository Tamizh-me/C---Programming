#include<iostream>
using namespace std;
int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int x=a+c;
    int y=b+d;
    if(y>=100){
        x+=y/100;
        y%=100;    }
        cout<<x;
        cout<<"\n"<<y;
   
}