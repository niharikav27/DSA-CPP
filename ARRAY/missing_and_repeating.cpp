#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int repeating = -1, missing = -1;

    for(int i = 1; i <= n; i++){
        int count = 0;

        for(int j = 0; j < n; j++){
            if(arr[j] == i){
                count++;
            }
        }

        if(count == 2){
            repeating = i;
        }
        else if(count == 0){
            missing = i;
        }

        if(repeating != -1 && missing != -1){
            break;
        }
    }

    cout << "Repeating: " << repeating << endl;
    cout << "Missing: " << missing << endl;
}