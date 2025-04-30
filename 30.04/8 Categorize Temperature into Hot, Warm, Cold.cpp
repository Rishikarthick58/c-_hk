#include <iostream>
using namespace std;

int main() {
    int temp;
    cin >> temp;
    if (temp > 35) {
        cout << "Hot";
    } else if (temp >= 20) {
        cout << "Warm";
    } else {
        cout << "Cold";
    }
    return 0;
}
