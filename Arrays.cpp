//Selection Sort
/*
#include<bits/stdc++.h>
using namespace std;
int main () {
    int arr[] = {1,4,3,6};
    int n = sizeof(arr) / sizeof(arr[0]);
    for(int i = 0; i < n - 1; i++){
        int num = arr[i];
         for(int j = i+1; j < n; j++){
            if(num >arr[j] ){
                arr[i] = arr[j];
                arr[j] = num;
                // if(arr[i] > arr[j]){
                // swap(arr[i], arr[j]);
            
            }
         }
    }
     for(int i = 0; i < n ; i++){
        cout << arr[i] << " " ;
     }
}
*/


/*
#include<bits/stdc++.h>
using namespace std;

void selection_sort(int arr[], int n) {
    for(int i = 0; i <= n-2; i++) {
        int mini = i;
        for(int j = i; j <= n-1; j++) {
            if(arr[j] < arr[mini]) {
                mini = j;
            }
        }
        swap(arr[i], arr[mini]);
    }
}

int main() {
    int n;
    cout << "Enter the size of array" << endl;
    cin >> n;

    int arr[n];
    cout << "Enter the elements into array" << endl;

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    selection_sort(arr, n);  // ✅ correct place

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
    */



//Bubble Sort

/*
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
}*/


//Insertion Sort
/*
#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {5, 3, 4, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    for(int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        // Shift elements greater than key
        while(j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }

    // Print sorted array
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}*/




// Merge Soting 
/*
#include <vector>
using namespace std;
void merge(vector<int> &arr, int low, int mid, int high) {
    vector<int> temp;
    // [low .. mid]
    //[mid+1 ... high]
    int left = low;
    int right = mid+1;
     // Merge the two halves
    while(left <= mid && right <= high) {
        if(arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        }
        else {
            temp.push_back (arr[right]);
            right++;

        }
    }

    // Remaining elements from left half
    while(left <= mid) {
    temp.push_back (arr[left]);
    left++;
    }

    // Remaining elements from right half
    while(right <= high){
        temp.push_back (arr[right]);
        right++;
    }

    // Copy back to original array
    for(int i = low; i<= high; i++){
        arr[i] = temp[i - low];
    }
}
void mS(vector<int> &arr, int low, int high) {
    if(low == high) return;
    int mid = (low + high) / 2;
    mS(arr, low, mid);
    mS(arr, mid+1, high);
    merge(arr, low, mid, high);
}
void mergeSort(vector < int > & arr, int n) {
    mS(arr, 0, n-1);
}*/


/*
#include <iostream>
#include <vector>
using namespace std;

// Merge function
void merge(vector<int> &arr, int low, int mid, int high) {
    vector<int> temp;

    int left = low;
    int right = mid + 1;

    // Merge two sorted halves
    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        } else {
            temp.push_back(arr[right]);
            right++;
        }
    }

    // Remaining elements
    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }

    while (right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

    // Copy back
    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
}

// Recursive merge sort
void mergeSort(vector<int> &arr, int low, int high) {
    if (low >= high) return;

    int mid = (low + high) / 2;

    mergeSort(arr, low, mid);
    mergeSort(arr, mid + 1, high);

    merge(arr, low, mid, high);
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    // Input
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Sort
    mergeSort(arr, 0, n - 1);

    // Output
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}*/



#include <iostream>
#include <vector>
using namespace std;

// Merge function
void merge(vector<int> &arr, int low, int mid, int high) {
    vector<int> temp;

    int left = low;
    int right = mid + 1;

    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        } else {
            temp.push_back(arr[right]);
            right++;
        }
    }

    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }

    while (right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
}

// Merge Sort
void mergeSort(vector<int> &arr, int low, int high) {
    if (low >= high) return;

    int mid = (low + high) / 2;
    mergeSort(arr, low, mid);
    mergeSort(arr, mid + 1, high);
    merge(arr, low, mid, high);
}

int main() {
    int n;

    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    mergeSort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}