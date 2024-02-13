#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a,b;
    cin>>a;
    cin>>b;
    int d= pow(a-3,2) + pow(b-4,2);
    int final=sqrt(d);
    cout<<final;
}