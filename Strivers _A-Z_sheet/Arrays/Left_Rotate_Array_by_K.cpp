//Left rotate an array by onee

#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5};
    int num = arr[0];
    for(int i = 0; i < (sizeof(arr) / sizeof(arr[0])) - 1; i++){
        arr[i] = arr[i+1];
    }
    arr[(sizeof(arr) / sizeof(arr[0])) - 1] = num;
    for(int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++){
        cout << arr[i] << endl;
    }
}