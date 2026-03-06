#include<iostream>
using namespace std;
void pairs(){
    pair<int,int>p ={1,3};
    cout<<p.first<<" "<<p.second<<endl;

    pair<int,pair<int,int>>t = {1,{3,4}};
    cout<<t.first<<" "<<t.second.first<<" "<<t.second.second<<endl;

    pair<int,int>arr[] = {{1,2},{3,4},{5,6}};
    cout<<arr[1].second;
}
int main(){
    pairs();
}