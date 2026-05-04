#include<bits/stdc++.h>
using namespace std;

long long power(int base, int n){
    long long ans = 1;
    for(int i = 0; i < n; i++){
        ans *= base;
    }
    return ans;
}

int root(int n, int m){
    for(int i = 1; i <= m; i++){
        long long val = power(i, n);

        if(val == m){
            return i;
        }
        else if(val > m){
            break;
        }
    }
    return -1;
}

int main(){
    int n, m;
    cin >> n;
    cin >> m;

    cout << root(n, m);
}