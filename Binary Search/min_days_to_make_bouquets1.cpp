#include <bits/stdc++.h>
using namespace std;

bool possible(vector<int>& bloomDay, int day, int m, int k) {

    int cnt = 0;
    int bouquets = 0;

    for (int i = 0; i < bloomDay.size(); i++) {

        if (bloomDay[i] <= day) {
            cnt++;
        } else {
            bouquets += cnt / k;
            cnt = 0;
        }
    }

    bouquets += cnt / k;

    return bouquets >= m;
}

int minDays(vector<int>& bloomDay, int m, int k) {

    long long total = 1LL * m * k;

    if (total > bloomDay.size()) {
        return -1;
    }

    int low = *min_element(bloomDay.begin(), bloomDay.end());
    int high = *max_element(bloomDay.begin(), bloomDay.end());

    while (low <= high) {

        int mid = low + (high - low) / 2;

        if (possible(bloomDay, mid, m, k)) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    return low;
}

int main() {

    int n;
    cin >> n;

    vector<int> bloomDay(n);

    for (int i = 0; i < n; i++) {
        cin >> bloomDay[i];
    }

    int m, k;
    cin >> m >> k;

    cout << minDays(bloomDay, m, k);

    return 0;
}