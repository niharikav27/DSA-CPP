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

int ls(int n,vector<int>&arr,int k){
    if(k > n) return -1;
    int maxi = *max_element(arr.begin(),arr.end());
    int sum = accumulate(arr.begin(),arr.end(),0);
    for(int walls  = maxi ; walls  <= sum ; walls  ++){
        int cntpainter = func(n,arr,walls );
        
        if(cntpainter == k){
            return walls ;
        }
    }
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

    cout<<ls(n,arr,k);
} 