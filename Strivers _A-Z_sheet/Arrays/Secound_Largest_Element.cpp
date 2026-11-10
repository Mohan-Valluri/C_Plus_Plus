#include<bits/stdc++.h>
using namespace std;
int main(){
    int Max = INT_MIN;
    int S_Max = INT_MIN;
    int arr[] = {1,2,3,4,5};
    for(int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++){
        if(arr[i] > Max){
            S_Max = Max;
            Max = arr[i];
            
        }
        if(arr[i] < Max && arr[i] > S_Max){
            S_Max = arr[i];
        }
    }
    if(S_Max == INT_MIN){
        cout << "-1";
    }
    else{
        cout << S_Max;
    }
}