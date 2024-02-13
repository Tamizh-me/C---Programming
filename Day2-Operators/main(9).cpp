#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int n=a/b;
    int n2=a%b;
    cout<<"The number of students in each team is "<<n<<" and left out is "<<n2;
}