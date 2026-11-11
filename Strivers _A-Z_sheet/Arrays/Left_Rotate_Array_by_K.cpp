//Left rotate an array by K

#include<bits/stdc++.h>
using namespace std;
int main(){
    int nums[] = {1,2,3,4,5};
    int l = 3;
    int arr[l];
    for(int j = 0; j < l; j++) {
            arr[j] = nums[j];
        }

    for(int i = 0; i < sizeof(nums)/sizeof(nums[0]) - l; i++) {
        nums[i] = nums[i + l];
    }

    for(int a = 0; a < sizeof(arr)/sizeof(arr[0]); a++) {
        nums[sizeof(nums)/sizeof(nums[0]) - l + a] = arr[a];
    }

    for(int i = 0; i < sizeof(nums)/sizeof(nums[0]); i++){
        cout << nums[i] << endl;
    }
}