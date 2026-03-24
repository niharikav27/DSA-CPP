#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0 ; i<n ; i++){
        cin>>arr[i];
    }
    map<int,int>mpp;
    for(int i = 0 ; i<n ; i++){
        mpp[arr[i]]++;
    }
    for(auto it : mpp){
        if(it.second > (n/2)){
            cout<<it.first;
        }
    }
    return -1;
}