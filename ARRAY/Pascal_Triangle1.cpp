#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    long long ans = 1; 
    cout << ans << " ";

    for (int i = 0; i < n; i++) {
        ans = ans * (n - i);
        ans = ans / (i + 1);
        cout << ans << " ";
    }

    return 0;
}