#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    vector<int> leaders;

    for(int i = 0; i < n; i++){
        bool isLeader = true;

        for(int j = i + 1; j < n; j++){
            if(arr[j] > arr[i]){
                isLeader = false;
                break;
            }
        }
        if(isLeader){
            leaders.push_back(arr[i]);
        }
    }

    for(int x : leaders){
        cout << x << " ";
    }
    return 0;
}