#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n; 
    vector<int>arr(n);
    for (int i = 0 ; i< n ; i++){
        cin>>arr[i];
    }

    sort(arr.begin() , arr.end());
    
    int longest = 1;
    int count = 0;
    int last_smallest = INT_MIN;

    for(int i = 0 ; i< n ; i++){
        if(arr[i] - 1 == last_smallest){
           count +=1;
           last_smallest = arr[i];
        }else if(arr[i] != last_smallest){
            count =1;
            last_smallest = arr[i];
        }
        longest = max(longest , count);
    }

    cout<<longest;
}