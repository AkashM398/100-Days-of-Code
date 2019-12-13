#include <bits/stdc++.h>
using namespace std;


int main() {
    long long t, n;
    cin >> t;
    for (int q = 0; q < t; ++q) {
        cin >> n;
        cout << n * (n + 1) * (3 * n * n - n - 2) / 12 << "\n";
    }
    return 0;
}