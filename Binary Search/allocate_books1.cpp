#include<bits/stdc++.h>
using namespace std;

int func(int n,vector<int>&arr , int pages){
    int stu = 1;
    int stupages = 0;
    for(int i = 0 ; i<n ; i++){
       if(stupages + arr[i] <= pages){
         stupages += arr[i];
       }else{
         stu++ ;
         stupages = arr[i];
       }
    }
    return stu;
}

int bs(int n,vector<int>&arr,int m){
    if(m > n) return -1;
    int low = *max_element(arr.begin(),arr.end());
    int high = accumulate(arr.begin(),arr.end(),0);
    
    while(low <= high){
        int mid = (low + high)/2;
        int cntstu = func(n,arr,mid);
        if(cntstu > m){
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

    int m;
    cin>>m;

    cout<<bs(n,arr,m);
} 