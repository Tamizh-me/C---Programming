#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    float x1,x2,x3,y1,y2,y3;
    cin>>x1;
    cin>>y1;
    cin>>x2;
    cin>>y2;
    cin>>x3;
    cin>>y3;
    cout<<setprecision(1)<<fixed;
    cout<<(x1+x2+x3)/3<<"\n";
    cout<<(y1+y2+y3)/3;
    
}