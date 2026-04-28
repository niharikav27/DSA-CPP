#include<bits/stdc++.h>
using namespace std;

int minSearch(int n, vector<int> &arr){
    int low = 0, high = n-1;
    int ans = INT_MAX;

    while(low <= high){
        int mid = (low + high)/2;

        if(arr[low] == arr[mid] && arr[mid] == arr[high]){
            ans = min(ans, arr[low]);
            low++;
            high--;
        }
        else if(arr[low] <= arr[high]){
            ans = min(ans, arr[low]);
            break;
        }
        else if(arr[low] <= arr[mid]){
            ans = min(ans, arr[low]);
            low = mid + 1;
        }
        else{
            ans = min(ans, arr[mid]);
            high = mid - 1;
        }
    }

    return ans;
}

int main(){
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int ans = minSearch(n, arr);
    cout << ans;
}