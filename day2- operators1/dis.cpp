#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    float item1, item2, disc, discountedp, total, mrp ;
    cin>>item1;
    cin>>item2;
    cin>>disc;
    total=item1+item2;
    discountedp= total*(1-(disc/100));
    mrp=total-discountedp;
    cout<<setprecision(2)<<fixed;
    cout<<total<<"\n";
    cout<<discountedp<<"\n";
    cout<<mrp;
    
    
}