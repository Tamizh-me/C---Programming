#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c; 

    int numbers[3] = {a, b, c};
    sort(numbers, numbers + 3);

    int secondLargest = numbers[1];
    int minVal = min({a, b, c});
    int gcd = 1; 
    for(int i = 1; i <= minVal; i++) {
        if(a % i == 0 && b % i == 0 && c % i == 0) {
            gcd = i; 
        }
    }

    cout << "The treasure is in box which has number " << secondLargest << ".\n";
    cout << "The code to open the box is " << gcd << ".\n";

    return 0;
}
