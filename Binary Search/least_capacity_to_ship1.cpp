#include<bits/stdc++.h>
using namespace std;

int func(vector<int>&weight , int mid){
    int days = 1, load = 0 ;
    for(int i = 0 ; i<weight.size() ; i++){
        if((load + weight[i]) > mid){
            days = days + 1;
            load = weight[i];
        }else{
            load += weight[i];
        }
    }
    return days;
}

int capacity(vector<int>&weight , int Totaldays){
    int maxi = *max_element(weight.begin(),weight.end());
    int sum = accumulate(weight.begin(),weight.end(),0);
    
    int low = maxi , high = sum ,ans = 0;
    while(low <= high){
        int mid = (low + high)/2;
        
        int daysReq = func(weight , mid);

        if(daysReq <= Totaldays){
            ans = mid;
            high = mid - 1;
        }else{
            low = mid + 1;
        }
    }
    return ans;
}

int main(){
    int n;
    cin>>n;

    vector<int>weight(n);
    for(int i = 0; i<n ; i++){
        cin>>weight[i];
    }

    int Totaldays;
    cin>>Totaldays;

    cout<<capacity(weight,Totaldays);
}