#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    int n1,n2,n3;
    n3=a%10;
    int temp =a/10;
    n2=temp%10;
    n1=temp/10;
    if(n1==n3){
        cout<<"Same";
    
    }else{
        cout<<"Not Same";
    }
}