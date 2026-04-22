#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int maxi = INT_MIN;

    for(int i = 0; i < n; i++){
        int prod = 1;
        for(int j = i; j < n; j++){
            prod *= arr[j];
            maxi = max(maxi, prod);
        }
    }

    cout << maxi;
    return 0;
}