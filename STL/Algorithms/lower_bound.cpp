#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int x;
    cin >> x;

    auto it = lower_bound(arr.begin(), arr.end(), x);
    cout << (it - arr.begin());
}    