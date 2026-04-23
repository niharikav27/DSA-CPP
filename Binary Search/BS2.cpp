#include<bits/stdc++.h>
using namespace std;
int BinarySearch(vector<int> &arr , int low , int high , int target){
    if(low > high) return -1;

    int mid = (low + high)/2;
    
    if(arr[mid] == target){
        return mid;
    }else if(target > arr[mid]){
        return BinarySearch(arr,mid+1,high,target);
    }else{
        return BinarySearch(arr,low,mid-1,target);
    } 
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0 ; i<n ; i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;

    int result = BinarySearch(arr,0,n-1,target);

    if (result != -1)
        cout <<result;
    else
        cout <<-1;

    return 0;
}