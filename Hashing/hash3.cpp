#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;

    int hash[256] ={0};                         //for both lowercase and uppercase
    for(int i = 0 ; i<s.size() ; i++){                
        hash[s[i]] += 1;                     // if both lowercase and uppercase
    }                       
    int q;
    cin>>q;
    while(q--){
        char c;
        cin>>c;
        cout<<hash[c]<<endl;
    }
}