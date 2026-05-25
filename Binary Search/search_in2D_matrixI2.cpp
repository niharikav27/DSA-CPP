#include<bits/stdc++.h>
using namespace std;
bool search(vector<vector<int>>&mat,int n ,int m,int target){
    int low = 0, high = (n*m-1);
    while(low <= high){
        int mid = (low + high)/2;
        int row = mid/m, column = mid%m;
        if(mat[row][column] == target){
            return true;
        }else if(mat[row][column] < target){
            low = mid + 1;
        }else{
            high = mid - 1;
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