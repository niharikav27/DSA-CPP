#include <bits/stdc++.h>
using namespace std;

void reverseString(vector<char>& s){
    int n = s.size();

    vector<char> dups(n);

    for(int i = 0; i < n; i++){
        dups[n - i - 1] = s[i];
    }

    for(int i = 0; i < n; i++){
        s[i] = dups[i];
    }
}

int main(){
    int n;
    cin >> n;

    vector<char> s(n);

    for(int i = 0; i < n; i++){
        cin >> s[i];
    }

    reverseString(s);

    for(char ch : s){
        cout << ch << "";
    }

    return 0;
}