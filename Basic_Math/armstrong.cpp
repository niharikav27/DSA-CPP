#include<bits/stdc++.h>
using namespace std;
void armstrong(int n){
    int original = n;
    int sum = 0;
    int digits = 0;
    int temp = n;
    while(temp>0){
        digits++;
        temp = temp/10;
    }
    temp = n;
    while(temp>0){
        int digit = temp % 10;
        sum = sum + pow(digit , digits);
        temp = temp/10;
    }
    if( sum == original){
        cout<<"armstrong";
    }else{
        cout<<"not armstrong";
    }
}
int main(){
    int n;
    cin>>n;
    armstrong(n);
}