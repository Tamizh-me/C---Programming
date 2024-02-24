#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=0;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        bool dis=true;
        for(int j=0; j<i; j++){
            if(arr[i]==arr[j]){
                dis=false;
                break;
            }
        }
        if(dis){
            count++;
        }
    }
    cout<<count;
}