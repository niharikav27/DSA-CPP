#include<bits/stdc++.h>
using namespace std;

int func(vector<int>&weight , int cap){
    int days = 1, load = 0 ;
    for(int i = 0 ; i<weight.size() ; i++){
        if((load + weight[i]) > cap){
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

    for(int cap =maxi ; cap <= sum ; cap++){
        int daysReq = func(weight , cap);

        if(daysReq <= Totaldays){
        return cap;
        }
    }
    return -1;
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