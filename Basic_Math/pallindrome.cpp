#include<bits/stdc++.h>
using namespace std;
void reverse_number(int n){
    int a = n;
    int reverse = 0;
    while(n>0){
        int digit = n % 10;
        n = n/10;
        reverse = (reverse * 10) + digit;
    }
    if(a == reverse){
        cout<<"pallindrome";
    }else{
        cout<<"not a pallindrome";
    }
}
int main(){
    int n;
    cin>>n;
    reverse_number(n);
}