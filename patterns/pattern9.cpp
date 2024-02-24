#include <iostream>
using namespace std;
int main() {
    int n;

    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <=2*i-1; j++) {
           if(j%2!=0)
           cout<<j;
        }

        for (int k = 2*(i - 1)-1; k >0; k--) {
            if(k%2!=0)
            cout<<k;
        }
        cout<<"\n";
    }

    return 0;
}