#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string a;
    cin>>a;
    sort(a.begin(),a.end());
    cout<<"The sorted string is "<<a;
}