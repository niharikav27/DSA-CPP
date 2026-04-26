#include<bits/stdc++.h>
using namespace std;

int ff(int n , vector<int>&arr , int x){
    int low = 0 , high = n-1;
    int first = -1;
    while(low <= high){
        int mid = (low + high)/2;
        if(arr[mid] == x){
            first = mid;
            high = mid - 1;
        }else if (arr[mid] < x){
            low = mid + 1;
        }else{
            high = mid - 1 ;
        }
    }
    return first;
}

int fl(int n , vector<int>&arr , int x){
    int low = 0 , high = n-1;
    int last = -1;
    while(low <= high){
        int mid = (low + high)/2;
        if(arr[mid] == x){
            last = mid;
            low = mid + 1;
        }else if( arr[mid] < x){
            low = mid + 1;
        }else{
            high = mid - 1;
        }
    }
    return last;
}

pair<int, int> firstandlast(int n,vector<int> &arr, int x){
    int first = ff(n,arr,x);
    if(first == -1) return{-1,-1};
    int last = fl(n,arr,x);
    return{first,last};
}

int count(int n,vector<int> &arr,int x){
    pair<int,int> ans = firstandlast(n,arr,x);
    if(ans.first == -1) return 0;
    return ans.second - ans.first + 1 ;
}
int main(){
    int n ;
    cin>>n;
    vector<int>arr(n);
    for(int i = 0 ; i<n ;i++){
        cin>>arr[i];
    }
    int x;
    cin>>x;

    int countans = count(n,arr,x);

    cout<<countans;
    return 0;
}