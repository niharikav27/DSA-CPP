#include<bits/stdc++.h>
using namespace std;
int rotate(int arr[] , int n ,int d){
    d = d%n;
    reverse(arr , arr+d);
    reverse(arr+d , arr+n);
    reverse(arr , arr+n);
}
int main(){
    int n ;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i<n ; i++){
        cin>>arr[i];
    }
    int d;
    cin>>d;
    rotate(arr,n,d);

    for(int i = 0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
}