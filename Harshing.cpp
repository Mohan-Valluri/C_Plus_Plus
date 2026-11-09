//Given an array of integers, use hashing to count the frequency of each element and print the result.


//Normal Methodd
/*
#include<bits./stdc++.h>
using namespace std;
int main () {
    int n;
    cout << "Enter the size of an array" << endl ;
    cin >> n;
    int arr[n];
    // int num;
    for(int i = 0;  i < n; i++){
         cout << "enter the " << i+1 << " Element into array" << endl;
        // cin >> num;
        // arr[i] = num;
        cin >> arr[i];
       
    }
    int hash[103] = {0};
    for(int i = 0; i < n; i++){
        hash[arr[i]] ++;
    }
    cout << "Enter how many numbers that you need to search"<< endl;
    int count;
    cin >> count;
    for(int i = 0; i < count; i ++){
        int number;
        cout << "enter the " << i+1 << " Number to search" << endl;
        cin >> number;
        cout << number << " Apperars " << hash[number] << " times " <<endl;
    }
}*/



//Using Maps
/*
#include<bits./stdc++.h>
using namespace std;
int main () {
    int n;
    cout << "Enter the size of an array" << endl ;
    cin >> n;
    int arr[n];
    // int num;
    for(int i = 0;  i < n; i++){
         cout << "enter the " << i+1 << " Element into array" << endl;
        // cin >> num;
        // arr[i] = num;
        cin >> arr[i];
       
    }
    map <int, int> mpp;
    for(int i = 0; i < n; i++){
        mpp[arr[i]] ++;
    }
    cout << "Enter how many numbers that you need to search"<< endl;
    int count;
    cin >> count;
    for(int i = 0; i < count; i ++){
        int number;
        cout << "enter the " << i+1 << " Number to search" << endl;
        cin >> number;
        cout << number << " Apperars " << mpp[number] << " times " <<endl;
    }
}*/


//Given an array of integers, find the first element that appears more than once using hashing.
/*
#include<bits/stdc++.h>
using namespace std;
int main () {
    int n;
    cout << "Enter the size of an array" << endl ;
    cin >> n;
    int arr[n];
    for(int i = 0;  i < n; i++){
        cout << "enter the " << i+1 << " Element into array" << endl;
        cin >> arr[i];
       
    }
    int hash[103] = {0};
    for(int i = 0; i < n; i++){
        hash[arr[i]] ++;
    }
    bool found = false;

    for(int i = 0; i < n; i++){
        if(hash[arr[i]] > 1){
            cout << "first element that appears more than once is " << arr[i] << endl;
            found = true;
            break;
        }
    }
    if(!found){
    cout << "No element appears more than 1 time";
        }
}*/


//Given an array of integers, find the length of the longest subarray with sum = 0 using hashing.




