#include<iostream>
using namespace std;
int main(){
    string a;
    cin>>a;
    for(int i=0; i<a.length();i++){
        a[i]=toupper(a[i]);
    }
    cout<<"String in uppercase is "<<a;
}