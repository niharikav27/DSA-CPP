#include<bits/stdc++.h>
using namespace std;

int func(int n,vector<int>&arr , int walls){
    int painter = 1;
    int paintwalls = 0;
    for(int i = 0 ; i<n ; i++){
       if(paintwalls + arr[i] <= walls){
         paintwalls += arr[i];
       }else{
         painter++ ;
         paintwalls = arr[i];
       }
    }
    return painter;
}

int bs(int n,vector<int>&arr,int k){
    if(k > n) return -1;
    int low = *max_element(arr.begin(),arr.end());
    int high = accumulate(arr.begin(),arr.end(),0);

    while( low <= high){
        int mid = (low + high)/2;
        int cntpainter = func(n,arr,mid);
        if(cntpainter > k){
            low = mid + 1;
        }else{
            high = mid - 1;
        }
    }
    return low;
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

    cout<<bs(n,arr,k);
}