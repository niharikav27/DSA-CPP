#include<bits/stdc++.h>
using namespace std;
int divisor(int n ,vector<int>&arr,int threshold){
    int maxi = *max_element(arr.begin(),arr.end());
    for(int d = 1; d<=maxi ; d++){
        int sum = 0;
        for(int i = 0 ; i<n ; i++){
            sum += ceil((double)arr[i]/(double)d);
        }
        if(sum <= threshold){
            return d;
        }
    }
return -1;
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

    cout<<divisor(n,arr,threshold);
}