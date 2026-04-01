#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i = 0 ; i<n ; i++){
        cin>>arr[i];
    }

    int longest = 0;

    for(int i = 0; i < n; i++) {
        int current = arr[i];
        int count = 1;

        while(true) {
            bool found = false;

            for(int j = 0; j < n; j++) {
                if(arr[j] == current + 1) {
                    found = true;
                    break;
                }
            }

            if(found) {
                current = current + 1;
                count++;
            } else {
                break;
            }
        }

        longest = max(longest, count);
    }

    cout << longest;

    return 0;
}