#include<bits/stdc++.h>
using namespace std;

int LowerBound(int n,vector<int> &arr ,int x ){
    int ans = n;
    int low = 0,high = n-1;
    while(low <= high){
        int mid = (low + high)/2;
        if(arr[mid] >= x){
           ans = mid;
           high = mid - 1;
        }else{
            low = mid + 1;
        }
    }
    return ans;
}
int UpperBound(int n,vector<int> &arr ,int x ){
    int ans = n;
    int low = 0,high = n-1;
    while(low <= high){
        int mid = (low + high)/2;
        if(arr[mid] > x){
            ans = mid;
            high = mid - 1;
        }else{
            low = mid + 1;
        }
    }
    return ans;
}
pair <int,int> firstandlast(int n,vector<int> &arr,int x){
    int lb = LowerBound(n,arr,x);
    if(lb == n || arr[lb] != x) return{-1,-1};
    return{lb,UpperBound(n,arr,x)-1};
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

    pair<int,int> ans = firstandlast(n, arr, x);

    cout << "first : " << ans.first << endl;
    cout << "last : " << ans.second << endl;

    return 0;
}