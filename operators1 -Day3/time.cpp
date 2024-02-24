#include <iostream>
using namespace std;

int main() {
    int hours, minutes, seconds;
    
    cin>>hours>>minutes>>seconds;
    
    minutes+= seconds / 60; 
    seconds%= 60; 
    hours+=minutes / 60; 
    minutes%= 60; 
    
    cout<<"Total Number of hours is "<<hours<<"\n";
    cout<<"Total Number of minutes is "<<minutes<<"\n";
    cout<<"Total Number of seconds is "<<seconds<<"\n";

    return 0;
}
