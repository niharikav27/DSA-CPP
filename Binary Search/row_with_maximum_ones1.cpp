#include<bits/stdc++.h>
using namespace std;
int lb(vector<int> &arr , int n,int x){
    int low = 0 , high = n-1; 
    int ans = n;

    while(low <= high){
        int mid = (low + high)/2;
        if(arr[mid] >= x){
            ans = mid;
            high = mid - 1;
        }else{
            low = mid + 1;
        }
    }
    return ans;
}
int ones(vector<vector<int>>&arr){
    int n = arr.size();
    int m = arr[0].size(); 
    int cnt_max = 0;
    int index = -1;
    for(int i = 0; i<n ; i++){
        int cnt_ones =m - lb(arr[i],m,1);
        if(cnt_ones > cnt_max){
            cnt_max = cnt_ones;
            index = i;
        }
    }
    
    return index;
}

int main(){
    int n, m;
    cin >> n >> m;

    vector<vector<int>> arr(n, vector<int>(m));

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }

    cout<<ones(arr);
} 