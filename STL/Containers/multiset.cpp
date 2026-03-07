#include<bits/stdc++.h>
using namespace std;
void MultiSet(){
    multiset<int>ms;
    ms.insert(1);          //{1}
    ms.insert(1);          //{1,1}
    ms.insert(1);          //{1,1,1}

    ms.erase(1);          //erases all 1

    int cnt = ms.count(1);

    ms.erase(ms.find(1)); //erases first occurence

    //REST ALL FUNCTIONS SAME AS SET
}
int main(){
    MultiSet();
}