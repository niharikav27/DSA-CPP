#include<bits/stdc++.h>
using namespace std;

int func(vector<int>&arr , int mid){
    int totalSum = 0;
    for(int i = 0 ; i< arr.size() ; i++){
        totalSum += ceil((double)arr[i]/(double)mid);
    }
    return totalSum;
}

int divisor(vector<int>&arr ,int threshold ){
    int low = 1,high = *max_element(arr.begin() , arr.end()),ans = 0;
    while(low <= high){
        int mid = (low + high)/2;

        int sum = func(arr,mid);

        if(sum <= threshold){
            ans = mid;
            high = mid - 1;
        }else{
            low = mid + 1;
        }
    }
    return ans;
}
int main(){
    int n ;
    cin>>n;

    vector<int>arr(n);
    for(int i = 0 ; i<n ; i++){
        cin>>arr[i];
    }

    int threshold;
    cin>>threshold;

    cout<<divisor(arr,threshold);
}