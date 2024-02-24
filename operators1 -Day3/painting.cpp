#include<iostream>
using namespace std;
int main(){
    int a,b;
    int w,x,y,z;
    cin>>a>>b>>w>>x>>y>>z;
    int marea=a*b;
    int area1=w*x;
    int area2=y*z;
    int tot=area1+area2;
    if(tot<=marea){
        cout<<"Karthi can fix both painting";
    }else{
        cout<<"Karthi cannot fix both painting";
    }
}