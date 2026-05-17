#include<bits/stdc++.h>
using namespace std;

int countPartitions(vector<int>& arr, int limit) {
    int partitions = 1;
    int currentSum = 0;

    for (int i = 0; i < arr.size(); i++) {

        if (currentSum + arr[i] <= limit) {
            currentSum += arr[i];
        }
        else {
            partitions++;
            currentSum = arr[i];
        }
    }

    return partitions;
}

int splitArray(vector<int>& arr, int k) {

    if (k > arr.size()) return -1;

    int low = *max_element(arr.begin(), arr.end());
    int high = accumulate(arr.begin(), arr.end(), 0);

    while (low <= high) {

        int mid = (low + high) / 2;

        int requiredPartitions = countPartitions(arr, mid);

        if (requiredPartitions > k) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    return low;
}

int main() {

    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int k;
    cin >> k;

    cout << splitArray(arr, k);
}