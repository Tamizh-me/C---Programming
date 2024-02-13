#include<iostream>
using namespace std;
int main(){
    int w;
    int x;
    int y;
    cin>>w;
    cin>>x;
    cin>>y;
    int rev=w*x;
    int fcost=100;
    int expen=w*y;
    int profit= rev-(expen+fcost);
    cout<<profit;
}