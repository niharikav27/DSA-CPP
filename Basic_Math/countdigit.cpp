// #include<bits/stdc++.h>
// using namespace std;
// void countDigit(int n){
//     int count=0;
//     while(n>0){
//         // int digit = n % 10;
//         count++;
//         n = n/10;
        
//     }
//     cout<<count;
// }
// int main(){
//     int n;
//     cin>>n;
//     countDigit(n);
     
// }

//ANOTHER WAY USING LOG
#include<bits/stdc++.h>
using namespace std;
void countDigit(int n){
    int count = (int) (log10(n)+1);
    cout<<count;
}
int main(){
    int n;
    cin>>n;
    countDigit(n);  
}