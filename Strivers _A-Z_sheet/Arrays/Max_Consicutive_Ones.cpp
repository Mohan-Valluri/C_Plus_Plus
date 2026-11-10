#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {0,1,1,1,0,0,0,1,1,1,1,1};
    int count =0;
    int max_count = 0;
    for(int i = 0; i< sizeof(arr)/ sizeof(arr[0]); i++){
        if(arr[i] == 1){
            count++;
            max_count = max(max_count, count);
        }
        else{
            count = 0;
        }
        
    }
    cout << max_count;
}


