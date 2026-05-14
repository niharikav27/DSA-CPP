#include<bits/stdc++.h>
using namespace std;

int func(int n,vector<int>&arr , int k){
    int low = 0,high = n-1;
    while(low <= high){
        int mid = (low + high)/2;
        int missing = arr[mid] - (mid + 1);

        if(missing < k){
            low = mid + 1;
        }else{
            high = mid - 1;
        }
    }
    return high + 1 + k;     // low + k
}
int main(){
    int n;
    cin>>n;

    vector<int>arr(n);
    for(int i = 0 ; i<n ; i++){
        cin>>arr[i];
    }

    int k;
    cin>>k;

    cout<<func(n,arr,k);
}    