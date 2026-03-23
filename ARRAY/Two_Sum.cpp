#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0 ; i<n ; i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;
    for(int i = 0 ; i<n ; i++){
        for(int j = 0 ; j<n ; j++){
            if(arr[i] + arr[j] == target ){
                cout<<"YES"<<endl;
                cout<<"After adding elements at position " <<i<<" and  "<<j;
                return 0 ;
            }

        }
    }
    cout<<"No";
    return 0 ;
}