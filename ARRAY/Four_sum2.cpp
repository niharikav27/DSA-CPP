#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> fourSum(vector<int>& nums, int target) {
    int n = nums.size();
    vector<vector<int>> ans;

    sort(nums.begin(), nums.end());

    for(int i = 0; i < n; i++) {

        // skip duplicates for i
        if(i > 0 && nums[i] == nums[i-1]) continue;

        for(int j = i + 1; j < n; j++) {

            // skip duplicates for j
            if(j > i + 1 && nums[j] == nums[j-1]) continue;

            int k = j + 1;
            int l = n - 1;

            while(k < l) {
                long long sum = (long long)nums[i] + nums[j] + nums[k] + nums[l];

                if(sum == target) {
                    ans.push_back({nums[i], nums[j], nums[k], nums[l]});
                    k++;
                    l--;

                    // skip duplicates for k
                    while(k < l && nums[k] == nums[k-1]) k++;

                    // skip duplicates for l
                    while(k < l && nums[l] == nums[l+1]) l--;
                }
                else if(sum < target) {
                    k++;
                }
                else {
                    l--;
                }
            }
        }
    }

    return ans;
}

int main() {
    int n, target;

    cin >> n;

    vector<int> nums(n);

    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cin >> target;

    vector<vector<int>> result = fourSum(nums, target);

    for(auto vec : result) {
        for(int x : vec) {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}