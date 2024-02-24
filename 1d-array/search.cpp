#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    int arr[a];
    bool set=false;
    for(int i=0; i<a; i++){
        cin>>arr[i];
    }
    int x;
    cin>>x;
    for(int i=0; i<a;i++){
        if(arr[i]==x){
            set=true;
        }
        
    }
           if(set==true){
            cout<<x<<" is present in the array";
        }else{
            cout<<x<<" is not present in the array";
        }
    
}