#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int even=0;
    int odd=0;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        if(arr[i]%2==0){
            even++;
        }else{
            odd++;
        }
        
    }
    if(even==n){
        cout<<"Even";
    }else if(odd==n){
        cout<<"Odd";
    }else{
        cout<<"Mixed";
    }
}