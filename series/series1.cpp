#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    int temp=7;
    for(int i=1; i<=a; i++){
        cout<<temp<<" ";
        if(i%2==1){
           temp=temp-2; 
        }else{
            temp=temp+3;
        }
    }
}