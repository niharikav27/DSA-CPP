#include<bits/stdc++.h>
using namespace std;

int PeakElement(int n , vector<int>&arr){
    for(int i = 0 ; i<n ; i++){
        if(( i == 0 || arr[i-1] < arr[i]) &&
              (i== n-1 || arr[i] > arr[i+1])){
                return i;
        }
    }
    return -1;
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0 ; i<n ; i++){
        cin>>arr[i];
    }

    int ans = PeakElement(n,arr);
    cout << ans;

    return 0;
}