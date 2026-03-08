#include<bits/stdc++.h>
using namespace std;
void sort(){
    sort(a,a+n);
    sort(v.begin(),v.end());
    sort(a+2,a+4);
    sort(a,a+n,greater<int>);    // sort in descending order

    pair<int,int> a[] = {{1,2},{2,1},{4,1}};
    sort(a,a+n,comp);
}
int main(){
    sort();
}
