#include<bits/stdc++.h>
using namespace std;
bool canWePlace(int n,vector<int>&arr,int dist ,int cows){
    int cntcows = 1;
    int last = arr[0];
    for(int i = 1 ; i<n ; i++){
        if(arr[i] - last >= dist){
            cntcows++;
            last = arr[i];
        }
        if(cntcows >= cows)
           return true;
    }
    return false;
}

int func(int n , vector<int>&arr , int cows){
    sort(arr.begin(),arr.end());
    
    for(int i = 1 ; i<= (arr[n-1] - arr[0]) ; i++){
        if(canWePlace(n,arr,i,cows) == true){
            continue;
        }else{
            return i-1;
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

    int cows;
    cin>>cows;

    cout<<func(n,arr,cows);
}    