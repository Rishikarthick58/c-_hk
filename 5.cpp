#include <iostream>
using namespace std;

void convertHours(int hours) {
    int minutes = hours * 60;
    int seconds = minutes * 60;

    cout << "Hours: " << hours << endl;
    cout << "Minutes: " << minutes << endl;
    cout << "Seconds: " << seconds << endl;
}

int main() {
    int hours;

    cout << "Enter hours: ";
    cin >> hours;

    convertHours(hours);

    return 0;
}