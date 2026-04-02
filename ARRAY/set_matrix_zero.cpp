#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> matrix(n, vector<int>(m));

    // input
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }

    // step 1: marking with -1
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(matrix[i][j] == 0) {

                // mark row
                for(int k = 0; k < m; k++) {
                    if(matrix[i][k] != 0) {
                        matrix[i][k] = -1;
                    }
                }

                // mark column
                for(int k = 0; k < n; k++) {
                    if(matrix[k][j] != 0) {
                        matrix[k][j] = -1;
                    }
                }
            }
        }
    }

    // step 2: convert -1 to 0
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(matrix[i][j] == -1) {
                matrix[i][j] = 0;
            }
        }
    }

    // print
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}