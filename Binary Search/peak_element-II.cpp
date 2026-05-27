#include<bits/stdc++.h>
using namespace std;

vector<int> findPeakGrid(vector<vector<int>>& mat) {
    int n = mat.size();
    int m = mat[0].size();

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {

            int up = -1, down = -1, left = -1, right = -1;

            if(i > 0) up = mat[i-1][j];
            if(i < n-1) down = mat[i+1][j];
            if(j > 0) left = mat[i][j-1];
            if(j < m-1) right = mat[i][j+1];

            if(mat[i][j] > up &&
               mat[i][j] > down &&
               mat[i][j] > left &&
               mat[i][j] > right) {

                return {i, j};
            }
        }
    }

    return {-1, -1};
}

int main() {

    int n, m;
    cin >> n >> m;

    vector<vector<int>> mat(n, vector<int>(m));

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> mat[i][j];
        }
    }

    vector<int> ans = findPeakGrid(mat);

    cout << ans[0] << " " << ans[1];

    return 0;
}