#include<bits/stdc++.h>
using namespace std;

// NUMBER HASHING

int main(){
    string s ;
    cin>>s;
    map<char,int>mp;
    for(int i =0 ; i<s.size() ; i++){
        mp[s[i]]++;
    }
    
    int q;
    cin>>q;
    while(q--){
        char c;
        cin>>c;

        cout<<mp[c]<<endl;
    }

}