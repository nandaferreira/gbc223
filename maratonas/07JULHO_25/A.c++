#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    
    int steps = 0;
    while (n > 0) {
    
        long long maxDigit = 0;
        long long temp = n;
        while (temp > 0) {
            maxDigit = max(maxDigit, temp % 10);
            temp /= 10;
        }
    
        n -= maxDigit;
        steps++;
    }
    
    cout << steps << endl;
    return 0;
}
