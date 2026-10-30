// 2)



// 1)  Read n elementss into a deque and reverse the deque without using the built-in reverse() function
/*
#include<bits/stdc++.h>
using namespace std;

int main(){
    deque<int> dq;
    int n,x;

    cin>>n;

    for(int i=0;i<n;i++){
        cin>>x;
        dq.push_back(x);
    }

    int i=0, j=dq.size()-1;

    while(i<j){
        swap(dq[i], dq[j]);
        i++;
        j--;
    }

    for(int x : dq)
        cout<<x<<" ";
}*/



// 2) Implement a program that rotates a deque to the right by k positions.
/*
#include<bits/stdc++.h>
using namespace std;

int main(){
    deque<int> dq;
    int n,k,x;

    cout<<"Enter number of elements: ";
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>x;
        dq.push_back(x);
    }

    cout<<"Enter k: ";
    cin>>k;

    k = k % dq.size();   // handle large k

    for(int i=0;i<k;i++){
        int val = dq.back();
        dq.pop_back();
        dq.push_front(val);
    }

    for(int x : dq)
        cout<<x<<" ";
}*/


// 3) Given a deque of integers, remove all duplicate elements while maintaining the original order.

/*
#include<bits/stdc++.h>
using namespace std;
int main (){
    deque<int> d1 = {1,2,3,3,4,5};
    deque<int> d2 = d1;
    for(int i = 0; i < d1.size(); i++){
        for(int j = i+1; j < d1.size(); j++){
             if(d1[i] == d2[j]){
                d2.erase(d2.begin() + j);
             }
    }
    }
    for(int i = 0; i < d2.size(); i++){
        cout << d2[i] << " ";
    }
}

*/


/*
#include<bits/stdc++.h>
using namespace std;

int main (){
    deque<int> d = {1,2,3,3,4,5};
    deque<int> d2;

    for(int i = 0; i < d.size(); i++){
        bool found = false;

        for(int j = 0; j < d2.size(); j++){
            if(d[i] == d2[j]){
                found = true;
                break;
            }
        }

        if(!found){
            d2.push_back(d[i]);
        }
    }

    for(int i = 0; i < d2.size(); i++){
        cout << d2[i] << " ";
    }
}*/




// check a deque is palindrome or not;
/*
#include<bits/stdc++.h>
using namespace std;
int main () {
    deque<int> d1 = {1,2,3,2,1};
    bool palin = true;
    for(int i = 0; i<d1.size() / 2 ; i++){
        if(d1[i] != d1[d1.size() - i -1]){
                 palin = false;
                 break;
        }
    }
    if(palin){
        cout << "the given deque is palindrome " ;
    }
    else{
        cout << "the given string is not palindrome " ;
    }
}
    */



// 4) Use a deque to check whether a given string is a palindrome.
/*
#include<iostream>
#include<deque>
using namespace std;
int main() {
    cout << "enter a string";
    string s;
    cin >> s;
    deque<char> c;
    for(int i = 0; i < s.length(); i ++ ){
        c.push_back(s[i]);
    }
    bool palin = true;
    for(int i = 0; i < s.length()/2; i ++ ){
        if(c[i] != c[c.size() - i - 1]){
            palin = false;
            break;
        }
    }
    if(palin == false){
        cout << "Not palindrome";
    }
    else{
        cout << "Palindrome";
    }
}*/



// 5) Given a deque of integers, move all even numbers to the front and odd numbers to the back, while maintaining their relative order.
/*
#include<bits/stdc++.h>
using namespace std;
int main (){
    deque<int>d = {1,2,3,4,5};
    deque<int> result;

    for(int x : d){
         if(x % 2 == 0)
              result.push_front(x);
         else
               result.push_back(x);
    }
     for(int x : result){
        cout  << x << " " ;
     }
}
*/


/*
#include<bits/stdc++.h>
using namespace std;

int main (){
    deque<int> d = {1,2,3,4,5};

    deque<int> even;
    deque<int> odd;

    for(int i = 0; i < d.size(); i++){
        if(d[i] % 2 == 0){
            even.push_back(d[i]);
        }
        else{
            odd.push_back(d[i]);
        }
    }

    deque<int> result;

    for(int x : even)
        result.push_back(x);

    for(int x : odd)
        result.push_back(x);

    for(int x : result)
        cout << x << " ";
}*/



// 6) Read n integers into a deque and find the maximum element in every window of size k (sliding window maximum problem).
/*
#include<bits/stdc++.h>
using namespace std;
int main (){
    deque<int> d = {1,2,9,10,3,4,11,5};
   // int j = 0;
    int k ;
    cout << "enter the window size ";
    cin >> k;
    for(int i = 0; i <= d.size() - k ; i++){
        int max = d[i];
        for(int l = i; l < k+i; l++ ){
            if(d[l] > max ){
                max = d[l];
            }
        }
        cout << max << endl ;

    }
}
*/



// Merge two sorted deques into a single sorted deque without using the sort() function.
/*
#include<bits/stdc++.h>
using namespace std;

int main(){
    deque<int> d1 = {1,3,5,7};
    deque<int> d2 = {2,4,6,8};

    deque<int> result;

    int i = 0, j = 0;

    while(i < d1.size() && j < d2.size()){
        if(d1[i] < d2[j]){
            result.push_back(d1[i]);
            i++;
        }
        else{
            result.push_back(d2[j]);
            j++;
        }
    }

    while(i < d1.size()){
        result.push_back(d1[i]);
        i++;
    }

    while(j < d2.size()){
        result.push_back(d2[j]);
        j++;
    }

    for(int x : result)
        cout << x << " ";
}*/



//Given a deque of integers, remove all elements that are smaller than the element immediately before them (keep only elements that maintain a non-decreasing order).
/*
#include<bits/stdc++.h>
using namespace std;

int main() {
    deque<int> d = {5,7,6,8,9,3,10};

    for(int i = 1; i < d.size(); ){
        if(d[i] < d[i-1]){
            d.erase(d.begin() + i);
        }
        else{
            i++;
        }
    }

    for(int x : d)
        cout << x << " ";
}*/