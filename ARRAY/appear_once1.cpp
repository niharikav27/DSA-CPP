#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i<n ; i++){
        cin>>arr[i];
    }
    int maxi = arr[0];
    for(int i = 0 ; i<n ; i++){
        maxi = max(maxi , arr[i]);
    }

    int hash[maxi + 1] = {0};
    for(int i = 0 ; i<n ; i++){
        hash[arr[i]]++;
    }
    for(int i = 0 ; i< n ; i++){
        if(hash[arr[i]] == 1){
            cout<<arr[i];
        }
    }

}    