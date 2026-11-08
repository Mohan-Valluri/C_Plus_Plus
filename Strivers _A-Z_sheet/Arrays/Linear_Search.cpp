#include <iostream>
using namespace std;
int main(){
    int num;
    cout << "enter a number that you need to search";
    cin >> num;
    int arr[] = {1,2,3,4};
    for(int i =0; i < sizeof(arr) / sizeof(arr[0])3; i++){
        if(arr[i] == num){
            cout << i;
            return 0;
        }
    }
    cout << -1;
    return 0;
}
