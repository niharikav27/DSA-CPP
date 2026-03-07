#include<bits/stdc++.h>
using namespace std;
void sets(){
    set<int>st;
    st.insert(1);
    st.emplace(2);
    st.insert(2);
    st.insert(4);
    st.insert(5);

    //SAME FUNCTIONS AS VECTOR

    //{1,2,3,4,5}
    auto it = st.find(3);

    auto it = st.find(6);

    st.erase(5);

    int cnt = st.count(3);

    //{1,2,3,4,5}
    auto it1 = st.find(2);
    auto it2 = st.find(4);
    st.erase(it1,it2);           //{1,4,5}

    auto it = st.lower_bound(2);      //3
    auto it = st.upper_bound(4);      //5
}
int main(){
    sets();
}