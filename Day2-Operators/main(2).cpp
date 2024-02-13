#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    float sq,rectl,rectb,rad;
    cin>>sq>>rectl>>rectb>>rad;
    cout<<sq*sq<<"\n"<<rectl*rectb<<"\n";
    float n=3.14*rad*rad;
    cout<<fixed<<setprecision(2)<<n;
}