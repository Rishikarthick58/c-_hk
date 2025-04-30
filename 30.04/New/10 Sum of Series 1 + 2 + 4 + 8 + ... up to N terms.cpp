#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of terms: ";
    cin >> n;
    
    int term = 1, sum = 0, count = 0;
    
    while (count < n) {
        sum += term;
        term *= 2;
        count++;
    }
    
    cout << "Sum of series: " << sum;
    
    return 0;
}
