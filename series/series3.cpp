#include<iostream>
using namespace std;
int main(){
    int n,a=6,b;
    cin>>n;
    cout<<a<<" ";
    for(int i=1;i<n;i++){
        b=a+(2*i)+1;
        cout<<b<<" ";
        a=b;
    }
}