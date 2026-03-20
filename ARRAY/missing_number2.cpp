#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ; 
    cin>>n;
    int arr[n-1];
    for(int i = 0 ; i<n-1 ; i++){
        cin>>arr[i];
    }
    int s2 = 0;
    int sum = (n*(n+1))/2;
    for(int i = 0 ; i<n-1 ; i++){
        s2 += arr[i];
    }
    cout<<sum - s2;
}