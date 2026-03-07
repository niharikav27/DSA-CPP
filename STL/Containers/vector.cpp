#include<bits/stdc++.h>
using namespace std;
void vectors(){
     vector<int> v;
     v.push_back(1);
     v.emplace_back(2);

     vector<pair<int,int>>vec;
     vec.push_back({1,3});
     vec.emplace_back(1,4);

     vector<int> v(5,100);
     vector<int>v(5);
     vector<int>v1(5,20);
     vector<int>v2(v1);

     vector<int> :: iterator it = v.begin();
    it++;
    cout<<*(it)<<endl;
    it = it + 2;
    cout<<*(it)<<endl;

    vector<int> :: iterator it = v.end();
    vector<int> :: iterator it = v.rend();
    vector<int> :: iterator it = v.rbegin();
    vector<int> :: iterator it = v.back();

    cout<<v[0];
    
    //to print elements of vector
    for(vector<int> :: iterator it = v.begin(); it!= v.end() ; it++){
        cout<<*(it)<<" ";
    }
    for(auto it = v.begin(); it!= v.end() ; it++){
        cout<<*(it)<<" ";
    }
    for(auto it : v){
        cout<<it<<" ";
    }

    //ERASE  FUNCTION
    v.erase(v.begin()+1);

    v.erase(v.begin()+1,v.begin()+4);

    //INSERT FUNCTION
    vector<int>v(2,100);          //{100,100}
    v.insert(v.begin(),300);      //{300,100,100}
    v.insert(v.begin()+1,5);      //{300,5,100,100}
    v.insert(v.begin()+1,2,10);   //{300,10,10,5,100,100}
    
    vector<int>copy(2,50);        //{50,50}
    v.insert(v.begin(),copy.begin(),copy.end());    //{50,50,300,10,10,5,100,100}

    //SIZE FUNCTION
    cout<<v.size();        //{100,200} == 2

    //POP BACK
    v.pop_back();           //{10,20,30} == {10,20}

    //SWAP
    v1.swap(v2);            // swap v1 value into v2 and vice versa

    //CLEAR
    v.clear();                // creates empy vectors by erasing every element

    //EMPTY
    v.empty();             //returns true when vector is empty
}
int main(){
    vectors();
}