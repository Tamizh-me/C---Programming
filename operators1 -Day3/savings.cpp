#include<iostream>
using namespace std;
int main(){
    int x,a,b,c,d;
    cin>>x>>a>>b>>c>>d;
    int tot=a+b+c+d;
    if(tot<x){
        cout<<"He can save the  money";
    }else {
        cout<<"He wants to work hard";
    }
}