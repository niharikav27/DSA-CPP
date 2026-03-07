#include<bits/stdc++.h>
using namespace std;
void map1(){
    map<int,int>mp;
    //map<int,pair<int,int>>mp;
    //map<pair<int,int>,int>mp;

    mp[1]=3;                    //{key=1 , value=3}
    mp.emplace(3,1);            //{key=3 , value=1}
    mp.insert({2,4});             //{key=2 , value=4}

    //mp[{2,3}]=10;        //for map<pair<int,int>,int>mp;

    for(auto it : mp){
        cout<<it.first<<" "<<it.second<<endl;
    }

    cout<<mp[1]<<endl;
    cout<<mp[5];             // print null=0

    auto it = mp.find(3);
}
int main(){
    map1();
}