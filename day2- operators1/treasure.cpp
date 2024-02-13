#include<iostream>
using namespace std;
int main(){
    int tot, fin, stone, finsh, stonesh, othersh, newtot;
    cin>>tot;
    cin>>fin;
    cin>>stone;
    finsh=(tot*fin)/100;
    newtot=tot-finsh;
    stonesh=(newtot*stone)/100;
    othersh= newtot -stonesh;
    cout<<finsh<<"\n";
    cout<<stonesh<<"\n";
    cout<<othersh/3;
}