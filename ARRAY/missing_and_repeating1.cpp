#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int hash[n+1] = {0};  

    for(int i = 0; i < n; i++){
        hash[arr[i]]++;
    }

    int repeating = -1, missing = -1;

    for(int i = 1; i <= n; i++){
        if(hash[i] == 2){
            repeating = i;
        }
        else if(hash[i] == 0){
            missing = i;
        }

        if(repeating != -1 && missing != -1){
            break;
        }
    }

    cout << "Repeating: " << repeating << endl;
    cout << "Missing: " << missing << endl;
}