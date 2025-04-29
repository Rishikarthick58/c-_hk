#include <iostream>
using namespace std;

bool isValidTriangle(int angle1, int angle2, int angle3) {
    int sum = angle1 + angle2 + angle3;
    return (sum == 180);
}

int main() {
    int a1, a2, a3;

    cout << "Enter first angle: ";
    cin >> a1;

    cout << "Enter second angle: ";
    cin >> a2;

    cout << "Enter third angle: ";
    cin >> a3;

    if (isValidTriangle(a1, a2, a3)) {
        cout << "The angles form a valid triangle." << endl;
    } else {
        cout << "The angles do not form a valid triangle." << endl;
    }

    return 0;
}
