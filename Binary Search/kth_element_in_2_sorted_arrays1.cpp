#include<bits/stdc++.h>
using namespace std;

int kthElement(int n1, vector<int>&arr1, int n2, vector<int>&arr2, int k){
    int i = 0, j = 0;
    int cnt = 0;
    int ans = -1;

    while(i < n1 && j < n2){
        if(arr1[i] < arr2[j]){
            if(cnt == k-1) ans = arr1[i];
            cnt++;
            i++;
        }else{
            if(cnt == k-1) ans = arr2[j];
            cnt++;
            j++;
        }
    }

    while(i < n1){
        if(cnt == k-1) ans = arr1[i];
        cnt++;
        i++;
    }

    while(j < n2){
        if(cnt == k-1) ans = arr2[j];
        cnt++;
        j++;
    }

    return ans;
}

int main(){
    int n1;
    cin >> n1;

    vector<int>arr1(n1);
    for(int i = 0; i < n1; i++){
        cin >> arr1[i];
    }

    int n2;
    cin >> n2;

    vector<int>arr2(n2);
    for(int i = 0; i < n2; i++){
        cin >> arr2[i];
    }

    int k;
    cin >> k;

    cout << kthElement(n1, arr1, n2, arr2, k);
}