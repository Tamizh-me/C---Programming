#include <iostream>
using namespace std;

int main() {
    int n,pos;
    cin>>n;
    
    int arr[n];
    
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    cin>>pos;
    pos--;
    
    if(pos>=0&&pos<n) {
        for(int i=pos;i<n-1; i++) {
            arr[i]=arr[i+1];
        }
        n--; 
    
    for(int i=0;i<n;i++) {
        cout<<arr[i]<< endl;
    }
    }
    else{
        cout<<"Invalid Input";
    }
    
}
