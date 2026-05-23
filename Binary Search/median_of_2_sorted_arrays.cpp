#include<bits/stdc++.h>
using namespace std;

int median(int n1,vector<int>&arr1,int n2,vector<int>&arr2){
    vector<int>arr3;
    int i = 0,j = 0;
    while(i<n1 && j<n2){
        if(arr1[i] < arr2[j]) arr3.push_back(arr1[i++]);
        else arr3.push_back(arr2[j++]);
    }
    while(i<n1) arr3.push_back(arr1[i++]);
    while(j<n2) arr3.push_back(arr2[j++]);

    int n = n1+n2;
    if(n%2 == 1){
        return arr3[n/2];
    }
    return ((double)(arr3[n/2]) + (double)(arr3[n/2 - 1])) /2.0;
}

int main(){
    int n1;
    cin>>n1;
    vector<int>arr1(n1);
    for(int i = 0 ; i<n1 ; i++){
        cin>>arr1[i];
    }
    int n2;
    cin>>n2;
    vector<int>arr2(n2);
    for(int i = 0 ; i<n2 ; i++){
        cin>>arr2[i];
    }

    cout<<median(n1,arr1,n2,arr2);
}