#include <bits/stdc++.h>
using namespace std;

int minEatingSpeed(vector<int>& piles, int h) {
    int maxPile = *max_element(piles.begin(), piles.end());

    for (int k = 1; k <= maxPile; k++) {
        int hours = 0;

        for (int pile : piles) {
            hours += ceil((double)pile / k);
        }

        if (hours <= h) {
            return k;
        }
    }
    return -1;
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int h;
    cin >> h;

    cout << minEatingSpeed(arr, h);
}