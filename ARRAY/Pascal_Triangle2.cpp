#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int row = 0; row < n; row++) {
        long long ans = 1;

        for (int col = 0; col <= row; col++) {
            cout << ans << " ";

            ans = ans * (row - col);
            ans = ans / (col + 1);
        }

        cout << endl;
    }

    return 0;
}