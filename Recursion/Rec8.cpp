//PARAMETERIZED RECURSION

#include<bits/stdc++.h>
using namespace std;
void fact1(int i , int fact){
    if(i<1){
        cout<<fact;
        return ;
    }
    fact1(i-1,fact*i);
}
int main(){
    int n;
    cin>>n;
    fact1(n,1);
}

//fUNCTIONAL RECURSION

#include<bits/stdc++.h>
using namespace std;
int fact(int n){
    if(n == 0){
        return 1 ;
    }
    return n * fact(n-1);

}
int main(){
    int n;
    cin>>n;
    cout<<fact(n);
}