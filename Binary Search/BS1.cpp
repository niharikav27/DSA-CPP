#include<bits/stdc++.h>
using namespace std;

int BinarySearch(vector<int> &arr , int target){
    int low = 0 , high=arr.size()-1;
    while(low <= high){
        int mid = (low + high)/2;

        if(arr[mid] == target){
            return mid;
        }else if(target > arr[mid]){
            low = mid + 1;
        }else{
            high = mid - 1;
        }
    }
    return -1;
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

    int result = BinarySearch(arr,target);

    if (result != -1)
        cout <<result;
    else
        cout <<-1;

    return 0;
}