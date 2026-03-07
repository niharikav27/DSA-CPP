#include<bits/stdc++.h>
using namespace std;
void lists(){
    list<int>ls;
    ls.push_back(2);               //2
    ls.emplace_back(4);            //2 4
    ls.push_front(5);              // 5 2 4
    ls.emplace_front();            // 0 5 2 4
    for(auto it = ls.begin(); it != ls.end(); it++){
        cout<<*(it);
    }
}
int main(){
    lists();
}

//REST FUNCTIONS ARE SAME AS VECTOR