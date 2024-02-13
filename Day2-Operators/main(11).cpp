#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int a,b;
    float c;
    cin>>a>>b>>c;
    float inr=(a*b*c)/100;
    cout<<fixed<<setprecision(2)<<inr;
}