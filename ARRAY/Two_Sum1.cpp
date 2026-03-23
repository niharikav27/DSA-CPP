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

    map<int,int>mpp;
    for(int i = 0 ; i<n ; i++ ){
        int a = arr[i];
        int more = target - a;
        if(mpp.find(more) != mpp.end()){
            cout<<"YES"<<endl;
            cout<<"After adding elements at position " <<mpp[more]<<" and  "<<i;
            return 0;
        }
        mpp[a] = i;
    }
    cout<<"NO";
    return 0;
}    