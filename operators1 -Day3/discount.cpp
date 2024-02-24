#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    int d,s;
    float m;
    char b;
    cin>>d>>s>>m>>b;
    float fb = 0.0;
    float fa = 0.0;
    float tot = s + d; 
    if (b=='B') {
        fa=d/m;
        fb=(s-d)/m;
    } else{ 
        fa=s/m;
        fb=0.0;
    }
    if (b=='A' || d>=s) {
        fa=s/m;
        fb= 0.0;
    }
    cout<<fixed<<setprecision(2);
    cout<<fa<<"\n";
    cout<<fb<<"\n";
}
