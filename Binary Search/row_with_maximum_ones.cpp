#include<bits/stdc++.h>
using namespace std;
int ones(vector<vector<int>>&arr){
    int n = arr.size();
    int m = arr[0].size(); 

    int index = -1;
    int max_count = -1;
    for(int i = 0; i<n ; i++){
        int count_row = 0;
        for(int j = 0 ; j<m ; j++){
            count_row += arr[i][j];
        }
        if(count_row > max_count){
            max_count = count_row;
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