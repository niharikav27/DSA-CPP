//PARAMETERIZED RECURSION

#include<bits/stdc++.h>
using namespace std;
void sum1(int i , int sum){
    if(i<0){
        cout<<sum;
        return ;
    }
    sum1(i-1,sum+i);
}
int main(){
    int n;
    cin>>n;
    sum1(n,0);
}

//fUNCTIONAL RECURSION

#include<bits/stdc++.h>
using namespace std;
int sum(int n){
    if(n == 0){
        return 0 ;
    }
    return n + sum(n-1);

}
int main(){
    int n;
    cin>>n;
    cout<<sum(n);
}