#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0 ; i<n ;i++){
        cin>>arr[i];
    }
    set<vector<int>> st;

    for(int i = 0; i < n; i++) {
        set<int> hashset;
        
        for(int j = i + 1; j < n; j++) {
            int third = -(arr[i] + arr[j]);
            
            if(hashset.find(third) != hashset.end()) {
                vector<int> temp = {arr[i], arr[j], third};
                sort(temp.begin(), temp.end());
                st.insert(temp);
            }
            
            hashset.insert(arr[j]);
        }
    }

    for(auto triplet : st) {
        for(int x : triplet) cout << x << " ";
        cout << endl;
    }

    return 0;
}