//LONGEST SUBARRAY WITH SUM K ONLY FOR POSITIVES

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    cin>>n;
    vector<int> a(n);
    for(int i = 0 ; i<n ; i++){
        cin>>a[i];
    }
    int k;
    cin>>k;
    int len = 0;
    for(int i = 0 ; i<n ; i++){
        int sum = 0;
        for(int j = i ; j<n ; j++){
            sum += a[j];
            if(sum == k ){
                len = max(len , j-i+1);
            }
        }
    }
    cout<<len;
}