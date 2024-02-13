#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main(){
    double t,v,wcf;
    cin>>t;
    cin>>v;
    cout<<setprecision(2)<<fixed;
    wcf= 35.74 + (0.6215*t)+((0.4275*t)-35.75)*(pow(v,0.16));
    cout<<wcf;
}