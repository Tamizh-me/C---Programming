#include<iostream>

#include<iomanip>
using namespace std;
int main(){
    float a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    float avg=(a+b+c+d+e)/5;
    cout<<setprecision(2)<<fixed;
    cout<<avg;
}