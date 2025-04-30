#include <iostream>
using namespace std;

int main() {
    int hour;
    cin >> hour;
    int minute = 1;
    while (minute <= 60) {
        if (hour % minute == 0) {
            cout << minute << " ";
        }
        minute++;
    }
    return 0;
}
