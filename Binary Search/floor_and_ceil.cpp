#include<bits/stdc++.h>
using namespace std;
int floor(vector<int> &arr , int x , int n){
    int ans1 = -1;
    int low = 0, high = n-1;

    while(low <= high){
        int mid = (low + high)/2;
         if(arr[mid] <= x){
            ans1 = arr[mid];
            low = mid + 1;
        }else{
            high = mid - 1;
        }
    }
    return ans1;
}
int ceil(vector<int> &arr , int x , int n){
    int ans2 = -1;
    int low = 0, high = n-1;

    while(low <= high){
        int mid = (low + high)/2;
        if(arr[mid] >= x){
           ans2 = arr[mid];
           high = mid - 1;
        }else{
           low = mid + 1;
        }
    }
    return ans2;
}
int main(){
    int n ; 
    cin>>n ;

    vector<int>arr(n);
    for(int i = 0 ; i<n ; i++){
        cin>>arr[i];
    }

    int x;
    cin>>x;

    int ans1 = floor(arr,x,n);
    int ans2 = ceil(arr,x,n);

    cout<<"floor : " <<ans1<<endl;
    cout<<"ceil : " <<ans2;
}