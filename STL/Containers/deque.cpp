#include<bits/stdc++.h>
using namespace std;
void deque1(){
    deque<int>dq;
    dq.push_back(2);               //2
    dq.emplace_back(4);            //2 4
    dq.push_front(5);              // 5 2 4
    dq.emplace_front();            // 0 5 2 4
    dq.pop_back();                 //0 5 2
    dq.pop_front();                //5 2
    dq.back();
    dq.front();
    for(auto it = dq.begin(); it != dq.end(); it++){
        cout<<*(it);
    }
}
int main(){
    deque1();
}

//REST FUNCTIONS ARE SAME AS VECTOR