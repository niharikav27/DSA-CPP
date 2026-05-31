#include <bits/stdc++.h>
using namespace std;

bool reverseString(vector<char>& s){
    int n = s.size();

    vector<char> dups(n);

    for(int i = 0; i < n; i++){
        dups[n - i - 1] = s[i];
    }

    if(s == dups) return true;
    return false;
}

int main(){
    int n;
    cin >> n;

    vector<char> s(n);

    for(int i = 0; i < n; i++){
        cin >> s[i];
    }

    cout<<boolalpha<<reverseString(s);

    return 0;
}