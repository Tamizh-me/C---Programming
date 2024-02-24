#include<iostream>
#include<string>
using namespace std;
int main(){
    string a;
    int n,rs,st;
    cin>>a;
    cin>>n>>rs>>st;
    int cost=st*rs;
    int rem=n-st;
    cout<<"Amount for "<<st<<" "<<a<<" is "<<cost<<"\n"<<" Remaining number of "<<a<<" present in stock is "<<rem;
    
}