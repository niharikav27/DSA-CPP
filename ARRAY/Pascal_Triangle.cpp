#include <bits/stdc++.h>
using namespace std;

long long nCr(int r, int c) {
    if (c > r) return 0;

    long long res = 1;

    for (int i = 0; i < c; i++) {
        res = res * (r - i);
        res = res / (i + 1);
    }

    return res;
}

int main() {
    int r, c;
    cin >> r >> c;

    cout << nCr(r, c);

    return 0;
}