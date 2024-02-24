#include <iostream>
using namespace std;

int main() {
    int x, y; 
    float o,t,m; 
    
    cin>>x>>y>>o>>t>>m;
    
    if (o>=t || t>=m) {
        cout<<"Invalid Input" << "\n";
        return 0; 
    }
    float tot=(x*o)+(y*t);
    
    if (tot>= m) {
        cout<<"Monthly Pass" << "\n";
    } else {
        cout<<"One way pass + Two way pass" << "\n";
    }
    
}
