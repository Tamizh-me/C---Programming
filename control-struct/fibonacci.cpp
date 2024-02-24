#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a;
    cin>>a;
    bool ps;
    
    int s1=( 5*a*a)+4;
    int s2=(5*a*a)-4;
    int s1sqrt= sqrt(s1);
    int s2sqrt= sqrt(s2);
    if((s1sqrt*s1sqrt)==s1 || ((s2sqrt*s2sqrt)==s2)){
        ps= true;
        cout<<"Fibonacci number";
    }else{
        ps=false;
        cout<<"Not Fibonacci Number";
    }
    
}