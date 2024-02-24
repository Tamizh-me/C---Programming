#include <iostream>
using namespace std;

int main() {
    int a,x,y;
    cin>>a>>x>>y;
    int row=y/a;

    if (y%a == 0) {
        cout<< "-1"<<"\n";
    }
    int sq;
    if (row==0) { 
        sq=1;
    } else if (row % 2 == 1) { 
        if (abs(x)<a/2)sq = (row+1)/2*3 -1;
        else sq = -1;
    } else {
        if(x==0)sq=-1; 
        else if(x>0&&x<a){
        sq=row/2*3;
        }
        
        else if(x<0 && x>-a) {
        sq = row / 2 * 3 - 2;
        }
        else {
            sq = -1;
        }
    }

    cout<<sq<<"\n";
}
