#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0 ; i<n ; i++){
        cin>>arr[i];
    }

    for(int i = 0 ; i<n ;i++){
        int count = 0;
        for(int j = 0 ; j<n ; j++){
            if(arr[j] == arr[i]){
                count++;
            }
        }
        if(count > n/2){
            cout<<arr[i];
            return 0;
        }
    }
    return -1;
}