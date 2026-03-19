#include<bits/stdc++.h>
using namespace std;
int main(){
    int n1;
    cin>>n1;
    int arr1[n1];
    set<int>st;
    for(int i = 0 ; i<n1 ; i++){
        cin>>arr1[i];
        st.insert(arr1[i]);
    }
    int n2;
    cin>>n2;
    int arr2[n2];
    for(int i = 0 ; i<n2 ; i++){
        cin>>arr2[i];
        st.insert(arr2[i]);
    }
    vector<int> temp;
    for(auto it : st){
        temp.push_back(it);
    }
    for(int i = 0 ; i < temp.size() ; i++){
        cout << temp[i] << " ";
    }
    
}