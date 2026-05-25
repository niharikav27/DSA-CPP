#include<bits/stdc++.h>
using namespace std;
bool search(vector<vector<int>>&mat,int n ,int m,int target){
    for(int i = 0 ; i<n ; i++){
        for(int j = 0; j<m ; j++){
            if(mat[i][j] == target){
               return true;
            }
        }
    }
    return false;
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
    cin>>target;

    cout<<search(mat,n,m,target);
} 