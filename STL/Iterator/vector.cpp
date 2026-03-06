#include<bits/stdc++.h>
using namespace std;
void vectors(){
    vector<int>v;
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

}
int main(){
    vectors();
}