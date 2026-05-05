#include<bits/stdc++.h>
using namespace std;
int findMax(int n,vector<int> &arr){
   int maxi = INT_MIN;
   for(int i = 0 ; i<n ; i++){
      maxi = max(maxi,arr[i]);
   }
   return maxi;
}

int calculateTotalHours(int n,vector<int> &arr , int hourly){
    int totalH = 0;
    for(int i = 0 ; i<n ; i++){
        totalH += ceil((double)arr[i] / (double)hourly);
    }
    return totalH;
}

int minimumRateToEatBananas(int n ,vector<int> &arr , int h){
    int low = 1 , high = findMax(n,arr);
    while(low <= high){
        int mid = (low + high)/2;
        int totalH = calculateTotalHours(n,arr,mid);
        if(totalH <= h){
            high = mid - 1;
        }else{
            low = mid + 1;
        }
    }
    return low;
}

int main(){
    int n ;
    cin>>n;

    vector<int>arr(n);
    for(int i = 0 ; i< n; i++){
        cin>>arr[i];
    }

    int h;
    cin>>h;

    int ans = minimumRateToEatBananas(n,arr,h);
    cout<<ans;
    return 0;
}