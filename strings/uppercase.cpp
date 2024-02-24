#include<iostream>
using namespace std;
int main(){
    string a;
    cin>>a;
    for(int i=0; i<a.length();i++){
        a[i]=tolower(a[i]);
    }
    cout<<"String with lowercase is "<<a;
}