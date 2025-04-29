#include <iostream>
using namespace std;

int stairwayOfSquares(int n) {
    if (n == 0) {
        return 0; // Base case
    }
    return (n * n) + stairwayOfSquares(n - 1); // Recursive case
}

int main() {
    int n;

    cout << "Enter the number of steps: ";
    cin >> n;

    int result = stairwayOfSquares(n);

    cout << "Sum of squares up to " << n << " is: " << result << endl;

    return 0;
}
