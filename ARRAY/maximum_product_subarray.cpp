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
        for(int j = i; j < n; j++){
            
            int prod = 1;

            for(int k = i; k <= j; k++){
                prod *= arr[k];
            }

            maxi = max(maxi, prod);
        }
    }

    cout << maxi;
    return 0;
}