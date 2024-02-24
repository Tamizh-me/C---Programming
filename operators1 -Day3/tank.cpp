#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int rad, height, water;
    float hour;
    cin>>rad>>height>>water>>hour;
    int volume= 3.14*rad*rad*height;
    int rwater=water*hour;
    float times=volume/rwater;
    cout<<fixed<<setprecision(1);
    cout<<"The tank can be filled within "<<hour<<" hours";
}