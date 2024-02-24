#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int num, i;
    bool isprime = true;

    cin >> num;

    if (num <= 1) {
        isprime = false; 
    } else {
        for (i=2;i<=sqrt(num);i++) {
            if (num%i==0) {
                isprime= false; 
                break; 
            }
        }
    }

    if (isprime)
        cout<< "Prime" << endl;
    else
        cout<< "Not Prime" <<endl;

    return 0;
}
