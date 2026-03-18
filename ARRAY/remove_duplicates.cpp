#include<bits/stdc++.h>
using namespace std;
int remove(int n , int arr[]){
    int i = 0;
    for(int j = 1 ; j<n ; j++){
        if(arr[i] != arr[j]){
            arr[i+1] = arr[j];
            i++;
        }
    }
    return i+1;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i<n ; i++){
        cin>>arr[i];
    }
    int size = remove(n,arr);

    for(int k = 0 ; k < size ; k++){
        cout<<arr[k]<<" ";
    }
}