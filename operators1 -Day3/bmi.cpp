#include<iostream>
using namespace std;

int main() {
    float w, h, b; 
    cin>>w>>h;
    h = h/100;
    b = w/(h*h);
    if (b>=25) {
        cout << "You are obese. Go to doctor";
    } else if (b >= 19 && b < 25) {
        cout << "You are normal. Go walking daily and maintain it";
    } else {
        cout << "You are underweight. Have an apple daily";
    }
    
}