#include<iostream>
using namespace std;
int main(){
    string a;
    cin>>a;
    int count=0;
    for(int i=0; i<a.length();i++){
        if(a[i]=='a' || a[i]=='e'||a[i]=='i'|| a[i]=='o' || a[i]=='A' || a[i]=='E' || a[i]=='I'|| a[i]=='O' || a[i]=='U' ||a[i]=='u'){
            count++;
        }
        
    }
    cout<<"Number of vowels: "<<count;
}