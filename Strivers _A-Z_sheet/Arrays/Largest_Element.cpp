#include<iostream>
using namespace std;
int main(){
    int n; 
    cout<<" enter the size of arr[]" << endl;
    cin >> n;
    int arr[n];
    for(int i = 0; i< n; i++){
        cout << "enter the " << i+1 << " number" << endl;
        cin >> arr[i];
    }
    int largest = arr[0];
    for(int i = 1; i< n; i++){
        if(arr[i] > largest){
            largest = arr[i];

        }
    }
    cout << largest;
}