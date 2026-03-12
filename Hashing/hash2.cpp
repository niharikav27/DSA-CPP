#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;

    int hash[26] ={0};                         //for lowercase and uppercase
    for(int i = 0 ; i<s.size() ; i++){                
        hash[s[i]-'a'] += 1;                     // if uppercase   -'A'
    }                       
    int q;
    cin>>q;
    while(q--){
        char c;
        cin>>c;
        cout<<hash[c-'a']<<endl;
    }
}