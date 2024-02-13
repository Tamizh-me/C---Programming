#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    float x,y,r;
    cin>>x;
    cin>>y;
    cin>>r;
    float interest=(x*y*r)/100;
    float capital=(x+interest);
    float disc=interest*0.02;
    float amt=capital-disc;
    cout<<setprecision(2)<<fixed;
    cout<<interest<<"\n"<<capital<<"\n"<<disc<<"\n"<<amt;
}