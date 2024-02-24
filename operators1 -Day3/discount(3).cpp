#include<iostream>
#include<iomanip>
using namespace std;
int main ()
{
    float a,t;
    int m;
    cin>>a>>m;
    switch (m)
    {
        
        case 1:t=a-(a*0.2);break;
        case 2:t=a;break;
        case 3:t=a-(a*0.1);break;
        case 4:t=a-(a*0.1);break;
        case 5:t=a;break;
        case 6:t=a-(a*0.75);break;
        case 7:t=a-(a*0.75);break;
        case 8:t=a;break;
        case 9:t=a;break;
        case 10:t=a-(a*0.3);break;
        case 11:t=a-(a*0.3);break;
        default:t=a-(a*0.35);break;
    }
        cout<<fixed<<setprecision(2);
        cout<<"Zack's father needs to pay Rs."<<t<<".";
}
