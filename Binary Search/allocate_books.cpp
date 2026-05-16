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

int ls(int n,vector<int>&arr,int m){
    if(m > n) return -1;
    int maxi = *max_element(arr.begin(),arr.end());
    int sum = accumulate(arr.begin(),arr.end(),0);
    for(int pages =maxi ; pages <= sum ; pages ++){
        int cntstu = func(n,arr,pages);
        
        if(cntstu == m){
            return pages;
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

    int m;
    cin>>m;

    cout<<ls(n,arr,m);
} 