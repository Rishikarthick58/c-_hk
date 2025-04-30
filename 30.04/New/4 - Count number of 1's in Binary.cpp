#include <iostream>
using namespace std;

int countBinaryOnes(int n) {
    int count = 0;
    while (n > 0) {
        if (n % 2 == 1) {
            count++;
        }
        n /= 2;
    }
    return count;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Number of 1's in binary: " << countBinaryOnes(num);
    return 0;
}
