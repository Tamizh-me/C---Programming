#include<iostream>
using namespace std;
int main(){
    int fprice, fdiscp,fship;
    int sprice, sdiscp, sship;
    int aprice, adiscp, aship;
    cin>>fprice>>fdiscp>>fship>>sprice>>sdiscp>>sship>>aprice>>adiscp>>aship;
    int flip=(fprice-((fprice*fdiscp)/100))+fship;
    int snap=(sprice-((sprice*sdiscp)/100))+sship;
    int amaz=(aprice-((aprice*adiscp)/100))+aship;
    cout<<"In Flipkart Rs."<<flip<<"\n"<<"In Snapdeal Rs."<<snap<<"\n"<<"In Amazon Rs."<<amaz<<"\n";
    if(flip<snap && flip<amaz){
        cout<<"He will prefer Flipkart";
    }else if (snap<flip && snap<amaz){
        cout<<"He will prefer Snapdeal";
    }else{
        cout<<"He will prefer Amazon";
    }
}