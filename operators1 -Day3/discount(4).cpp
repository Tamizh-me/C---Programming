#include <iostream>
using namespace std;

int main() {
    float fleft, rleft, rright, fright;
    float fpr = 33.0;
    float rpr = 32.0;

    cin>>fleft>>rleft>>rright>>fright;

    if(fleft == fpr) {
        cout << "Front-left : Untouched" << "\n";
    } else if(fleft < fpr) {
        cout << "Front-left : Inflate" << "\n";
    } else {
        cout << "Front-left : Deflate" << "\n";
    }

    if(rleft == rpr) {
        cout << "Rear-left : Untouched" << "\n";
    } else if(rleft < rpr) {
        cout << "Rear-left : Inflate" << "\n";
    } else {
        cout << "Rear-left : Deflate" << "\n";
    }

    if(rright == rpr) {
        cout << "Rear-right : Untouched" << "\n";
    } else if(rright < rpr) {
        cout << "Rear-right : Inflate" << "\n";
    } else {
        cout << "Rear-right : Deflate" << "\n";
    }

    if(fright == fpr) {
        cout << "Front-right : Untouched" << "\n";
    } else if(fright < fpr) {
        cout << "Front-right : Inflate" << "\n";
    } else {
        cout << "Front-right : Deflate" << "\n";
    }

    return 0;
}
