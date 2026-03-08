#include<bits/stdc++.h>
using namespace std;
void reverse_number(int n){
    int reverse = 0;
    while(n>0){
        int digit = n % 10;
        n = n/10;
        reverse = (reverse * 10) + digit;
    }
    cout<<reverse;
}
int main(){
    int n;
    cin>>n;
    reverse_number(n);
}