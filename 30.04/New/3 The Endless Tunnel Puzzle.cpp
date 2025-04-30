#include <iostream>
using namespace std;

void tunnelEnergy(int energy) {
    if (energy <= 0) return;
    cout << energy << " ";
    tunnelEnergy(energy / 2);
}

int main() {
    int n;
    cout << "Enter starting energy: ";
    cin >> n;
    tunnelEnergy(n);
    return 0;
}
