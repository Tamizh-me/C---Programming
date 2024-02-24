#include<iostream>
using namespace std;
int main(){
    int n;
    
    cin>>n;
    int arr[n];
    int arr2[n];
    
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }for(int i=0; i<n; i++){
        cin>> arr2[i];
    }
    
    
    
    
    for(int k=0; k<n; k++){
        
    cout<<arr[k]+arr2[k]<<" ";
    }
    
}