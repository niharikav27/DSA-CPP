#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int prefix = 1, suffix = 1;
    int maxi = INT_MIN;

    for(int i = 0; i < n; i++){
        prefix *= arr[i];
        suffix *= arr[n - i - 1];

        maxi = max({maxi, prefix, suffix});

        if(prefix == 0) prefix = 1;
        if(suffix == 0) suffix = 1;
    }
    cout << maxi;
    return 0;
}