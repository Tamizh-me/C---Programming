#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    float a,b,c,d;
    cin>>a>>b>>c>>d;
    float x=(a+c)/2;
    float y=(b+d)/2;
    cout<<fixed<<setprecision(1)<<"Binoy's house is located at("<<x<<","<<y<<")";
}