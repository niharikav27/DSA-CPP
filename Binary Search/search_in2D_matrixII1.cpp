#include<bits/stdc++.h>
using namespace std;

pair<int,int> bs(vector<int> &arr, int target, int row){

    int low = 0, high = arr.size() - 1;

    while(low <= high){

        int mid = (low + high) / 2;

        if(arr[mid] == target){
            return {row, mid};
        }

        else if(arr[mid] < target){
            low = mid + 1;
        }

        else{
            high = mid - 1;
        }
    }

    return {-1,-1};
}

pair<int,int> search(vector<vector<int>>&mat,int n ,int m,int target){

    for(int i = 0 ; i < n ; i++){

        if(mat[i][0] <= target && target <= mat[i][m-1]){

            pair<int,int> ans = bs(mat[i], target, i);

            if(ans.first != -1){
                return ans;
            }
        }
    }

    return {-1,-1};
}

int main(){

    int n, m;
    cin >> n >> m;

    vector<vector<int>> mat(n, vector<int>(m));

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> mat[i][j];
        }
    }

    int target;
    cin >> target;

    pair<int,int> ans = search(mat,n,m,target);

    cout << ans.first << " " << ans.second;
}