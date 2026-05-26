#include<bits/stdc++.h>
using namespace std;

pair<int,int> search(vector<vector<int>>&mat,int n ,int m,int target){
    for(int i = 0 ; i<n ; i++){
        for(int j = 0; j<m ; j++){
            if(mat[i][j] == target){
               return {i,j};
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