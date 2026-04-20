#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    long long sum = 0, sqSum = 0;

    for(int i = 0; i < n; i++){
        sum += arr[i];
        sqSum += (long long)arr[i] * arr[i];
    }

    long long S = (long long)n * (n + 1) / 2;
    long long S2 = (long long)n * (n + 1) * (2*n + 1) / 6;

    long long val1 = sum - S;        // y - x
    long long val2 = sqSum - S2;     // y^2 - x^2

    val2 = val2 / val1;              // y + x

    long long y = (val1 + val2) / 2; // repeating
    long long x = y - val1;          // missing

    cout << "Repeating: " << y << endl;
    cout << "Missing: " << x << endl;
}