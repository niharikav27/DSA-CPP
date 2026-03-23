#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int mini = INT_MAX;
    int second_min = INT_MAX;

    for(int i = 0; i < n; i++){
        if(arr[i] < mini){
            second_min = mini;
            mini = arr[i];
        }
        else if(arr[i] > mini && arr[i] < second_min){
            second_min = arr[i];
        }
    }

    if(second_min == INT_MAX){
        cout << "No second minimum";
    } else {
        cout << second_min;
    }

    return 0;
}  