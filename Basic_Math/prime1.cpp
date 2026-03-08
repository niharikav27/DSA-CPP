#include<bits/stdc++.h>
using namespace std;
void divisors(int n){
    int count = 0;
    for(int i = 1 ; i*i<=n ; i++){              //<i*i<=n or we can write i<=sqrt(n)
        if(n % i == 0){
            count++;
            if((n/i) != i){
               count++ ;
            }
        }
        
    } 
    if(count == 2){
        cout<<"prime";
    }else{
        cout<<"not prime";
    } 
}
int main(){
    int n;
    cin>>n;
    divisors(n);
    return 0;
}