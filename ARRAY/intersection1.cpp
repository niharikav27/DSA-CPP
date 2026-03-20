#include<bits/stdc++.h>
using namespace std;
int main(){
    int n1;
    cin >> n1;
    int arr1[n1];
    for (int i = 0; i < n1; i++)
    {
        cin >> arr1[i];
    }
    int n2;
    cin >> n2;
    int arr2[n2];
    for (int i = 0; i < n2; i++)
    {
        cin >> arr2[i];
    }

    int i  = 0;
    int j = 0 ;
    vector<int>ans;
    while(i<n1 && j<n2){
        if(arr1[i]<arr2[j]){
            i++;
        }else if(arr2[j]<arr1[i]){
            j++;
        }else{
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
    }
    for(int x : ans){
        cout << x << " ";
    }    
}    