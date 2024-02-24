#include <iostream>
using namespace std;
#include <vector>

int main() {
    int size, position, value;

    cin>>size;

    if(size <= 0) {
        cout << "Invalid Input" << std::endl;
    }

    vector<int> array;

    for(int i=0; i< size; ++i) {
        int element;
        cin >> element;
        array.push_back(element);
    }

    cin >> position >> value;

    if(position < 1 || position >= size) {
        cout << "Invalid Input" << "\n";
    } else {
        array.insert(array.begin()+ position-1,value);

        for(int i = 0; i < array.size(); ++i) {
            if(i > 0) std::cout << "\n";
            cout << array[i];
        }
    }

    return 0;
}
