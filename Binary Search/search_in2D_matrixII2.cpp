#include<bits/stdc++.h>
using namespace std;

pair<int,int>search(vector<vector<int>>&mat , int n , int m , int target){
    int row = 0,col = m -1;
    while(row < n && col >= 0){
        if(mat[row][col] == target){
            return{row,col};
        }else if(mat[row][col] < target){
            row++;
        }else{
            col--;
        }
    }
    return {-1 , -1};
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