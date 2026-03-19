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

    vector<int>ans;
    int visited[n2] = {0};
    for(int i = 0 ; i<n1 ; i++){
        for(int j = 0 ; j<n2 ; j++){
            if(arr1[i] == arr2[j] && visited[j] == 0){
                ans.push_back(arr1[i]);
                visited[j] = 1;
                break;
            }
            if(arr2[j] > arr1[i]){
                break;
            }
        }
    }
    for(int i = 0 ; i<ans.size() ; i++){
        cout<<ans[i]<<" ";
    }
    
}