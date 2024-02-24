#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int sum=0;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        float sqt= sqrt(arr[i]);
        int fl= floor(sqt);
        if(fl==sqt){
            sum=sum+arr[i];
        }
    }
    
    cout<<sum;
}