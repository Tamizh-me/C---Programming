#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main(){
    float ip;
    cin>>ip;
    float flr= std::floor(ip);
    cout<<setprecision(1)<<fixed;
    cout<<int(ip)<<"\n";
    cout<<float(ceil(ip))<<"\n";
    cout<<float(flr);
    
}