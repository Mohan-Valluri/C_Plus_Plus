// Include

#include<bits/stdc++.h>
using namespace std;

int main () {
    int arr[] = {1,4,6,3};
    int n = sizeof(arr) / sizeof(arr[0]);

    for(int i = n-1; i > 0; i--){
        for(int j = 0; j < i; j++){   // ✅ fixed
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }

    for(int i = 0; i < n ; i++){
        cout << arr[i] << " ";
    }
}