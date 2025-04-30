#include <iostream>
using namespace std;

void visitOddFloors(int floor, int n) {
    if (floor > n) return;
    cout << floor << " ";
    visitOddFloors(floor + 2, n);
}

int main() {
    int n;
    cout << "Enter the highest floor number: ";
    cin >> n;
    visitOddFloors(1, n);
    return 0;
}
