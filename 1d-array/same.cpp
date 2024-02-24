#include<iostream>
using namespace std;
int main(){
    int n1;
    int n2;
    int arr[n1];
    int arr2[n2];
    bool set=false;
    cin>>n1>>n2;
    for(int i=0; i<n1; i++){
        cin>>arr[i];
    }for(int i=0; i<n2; i++){
        cin>> arr2[i];
    }
    
    for(int k=0; k<n1; k++){
if(arr[k]==arr2[k]){
    set=true;
}else{
    set=false;
}
    }
    if(set==true){
        cout<<"Same";
    }else{
        cout<<"Not Same";
    }
    
}