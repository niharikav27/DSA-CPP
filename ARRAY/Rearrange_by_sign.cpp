#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    vector<int> ans(n);

    int posIndex = 0; 
    int negIndex = 1;

    for(int i = 0; i < n; i++) {
        if(nums[i] > 0) {
            ans[posIndex] = nums[i];
            posIndex += 2;
        } else {
            ans[negIndex] = nums[i];
            negIndex += 2;
        }
    }

    for(int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }

    return 0;
}