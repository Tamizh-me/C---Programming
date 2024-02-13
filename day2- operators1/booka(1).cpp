#include<iostream>
using namespace std;
int main(){
    int day, week, year, month;
    cin>>day;
    year=day/365;
    int yearmod=day%365;
    
    week=yearmod/7;
    int days=yearmod%7;
    
    cout<<year<<"\n"<<week<<"\n"<<days;
    
    
}