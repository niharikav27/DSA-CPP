#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0 ; i<n ; i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;

    int left = 0;
    int right = n-1;
    sort(arr.begin() , arr.end());
    while(left < right){
        int sum = arr[left] + arr[right];
        if(sum == target){
            cout<<"YES";
            return 0 ;
        }else if(sum < target) left++;
        else right --;
    }
    cout<<"NO";
}