#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0 ; i<n ; i++){
        cin>>arr[i];
    }

    int maxi = INT_MIN;
    for(int i = 0 ; i<n ;i++){
        int sum = 0;
        for(int j = i ; j<n ; j++){
                sum += arr[j];
                maxi = max(sum,maxi);
            
        }
    }
    cout<<maxi;
    return 0 ;
}    