#include <bits/stdc++.h>
using namespace std;

void reverseString(vector<char>& s){
    int n = s.size();
    int left = 0;
    int right = n - 1;

    while(left < right){
        swap(s[left], s[right]);
        left++;
        right--;
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