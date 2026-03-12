#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i = 0 ; i<n ;i++){
        cin>>a[i];
    }

    int hash[13] ={0};                         // if there are numbers in array numbering from 
    for(int i = 0 ; i<n ; i++){                //0 to 12 we will take n+1 hash array size tehrefore 13
        hash[a[i]] += 1;
    }                       
    int q;
    cin>>q;
    while(q--){
        int numbers;
        cin>>numbers;

        cout<<hash[numbers]<<endl;
    }
}