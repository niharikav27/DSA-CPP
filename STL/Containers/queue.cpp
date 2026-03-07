#include<bits/stdc++.h>
using namespace std;
void queue1(){
    queue<int>q;
    q.push(1);               //1
    q.push(2);               //1 2
    q.emplace(4);            //1 2 4
    q.back() += 5;           //1 2 9
    cout<<q.back();          //9

    cout<<q.front();         //1

    q.pop();                 // 2 9

    cout<<q.front();         //2
}
int main(){
    queue1();
}


//   SIZE , SWAP , EMPTY SAME AS STACK