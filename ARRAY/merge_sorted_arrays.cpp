#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int arr1[n] , arr2[m];
    for(int i = 0 ; i<n ; i++){
        cin>>arr1[i];
    }
    for(int i = 0 ; i<m ; i++){
        cin>>arr2[i];
    }
     
    int arr3[n+m];
    int left = 0 ;
    int right = 0;
    int index = 0;

    while(left<n && right<m){
        if(arr1[left] <= arr2[right]){
            arr3[index] = arr1[left];
            left++,index++;
        }
        else{
            arr3[index] = arr2[right];
            right++,index++;
        }
    }
    while(left<n){
        arr3[index++] = arr1[left++];
    }
    while(right<m){
        arr3[index++] = arr2[right++];
    }

    for(int i = 0 ; i< n+m ; i++){
        cout<<arr3[i]<<" ";
    }
    cout<<endl;
    for(int i = 0; i < n; i++){
        arr1[i] = arr3[i];
    }

    for(int i = 0; i < m; i++){
        arr2[i] = arr3[n + i];
    }

    for(int i = 0; i < n; i++) cout << arr1[i] << " ";
    cout<<endl;
    for(int i = 0; i < m; i++) cout << arr2[i] << " ";
    cout<<endl;
}