#include <bits/stdc++.h>
using namespace std;

bool reverseString(vector<char>& s){
    int n = s.size();
    int left = 0;
    int right = n - 1;

    while(left < right){
        if(s[left] != s[right]) return false;
        left++,right--;
    }
    return true;
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