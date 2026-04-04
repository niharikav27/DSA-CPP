#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0 ; i<n ; i++){
        cin>>arr[i];
    }
    int target;
    cin >>target;
    int count = 0;
    map<int,int>mpp;
    mpp[0] = 1;
    int preSum = 0;

    for(int i= 0 ; i<n ; i++){
        preSum += arr[i];
        int remove = preSum - target;
        count += mpp[remove];
        mpp[preSum] += 1;
    }
    cout<<count;
    return 0 ;
}   