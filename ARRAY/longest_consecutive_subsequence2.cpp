#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n; 
    vector<int>arr(n);
    for (int i = 0 ; i< n ; i++){
        cin>>arr[i];
    }

    unordered_set<int> st;
    for(int i = 0; i < n; i++) {
        st.insert(arr[i]);
    }

    int longest = 0;
    for(auto it : st) {
        if(st.find(it - 1) == st.end()) {
            int current = it;
            int count = 1;
            while(st.find(current + 1) != st.end()) {
                current++;
                count++;
            }
            longest = max(longest, count);
        }
    }
    cout << longest;
    return 0;
}
