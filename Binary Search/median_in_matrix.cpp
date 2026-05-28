#include<bits/stdc++.h>
using namespace std;

int median(int n , int m ,vector<vector<int>>&mat){
    vector<int>ls;
    for(int i = 0; i<n ; i++){
        for(int j = 0; j <m ; j++){
            ls.push_back(mat[i][j]);
        }
    }
    sort(ls.begin() , ls.end());
    return ls[(n*m)/2] ;
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
    
    cout<<median(n,m,mat);

    return 0;
}