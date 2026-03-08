#include<bits/stdc++.h>
using namespace std;
void divisors(int n){
    vector<int> v;
    for(int i = 1 ; i*i<=n ; i++){              //<i*i<=n or we can write i<=sqrt(n)
        if(n % i == 0){
           v.push_back(i);
            if((n/i) != i){
               v.push_back(n/i) ;
            }
        }
        
    } 
    sort(v.begin(),v.end());
    for(auto it : v){
        cout<<it<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    divisors(n);
    return 0;
}