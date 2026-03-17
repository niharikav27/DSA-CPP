#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i = 0 ; i<n ; i++){
        cin>>arr[i];
    }

    int max = arr[0];
    int second_max = -1;

    for(int i = 1 ; i<n ; i++){
        if(arr[i] > max){
            second_max = max;
            max = arr[i];
        }
        else if(arr[i] < max && arr[i] > second_max){
            second_max = arr[i];
        }
    }

    cout<<second_max;
}