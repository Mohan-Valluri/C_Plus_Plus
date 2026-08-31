// 4)  6)  8)

// 1) Create a vector of integers, take n elements as input, and print all elements.
/*#include<iostream>
#include<vector>
using namespace std ;
int main () {
    vector <int > v;
    int size ;
    int num;
    cout << "enter the size of vector" ;
    cin >> size ;
    for(int i = 0; i<size; i++){
        cin >> num; 
        v.push_back(num);
    }
    for(int i = 0; i<size; i++){
        cout << v[i] << " " ;
    }
}*/


// 2) Insert an element at the end of a vector and print the updated vector.
/*
#include<iostream>
#include<vector>
using namespace std ;
int main () {
    vector <int > v;
    int size ;
    int num;
    cout << "enter the size of vector" ;
    cin >> size ;
    for(int i = 0; i<size; i++){
        cin >> num; 
        v.push_back(num);
    }
    // inserting element at back
    v.push_back(10);
    for(int i = 0; i<=v.size; i++){
        cout << v[i] << " " ;
    }
}*/


// 3) Find the sum of all elements in a vector.
/*#include<iostream>
#include<vector>
using namespace std ;
int main () {
    vector <int > v;
    int size ;
    int num;
    int sum = 0;
    cout << "enter the size of vector" ;
    cin >> size ;
    for(int i = 0; i<size; i++){
        cin >> num; 
        v.push_back(num);
    }
    for(int i = 0; i<size; i++){
        sum = sum + v[i] ;
    }
    cout << sum ;
}*/



// 4) Reverse a vector and print the result.

/*
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    vector<int> v;
    v = {1,2,3,4,5,6};

    reverse(v.begin(), v.end());

    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    return 0;
}*/


// 5) Find the maximum and minimum element in a vector.
/*
#include<iostream>
#include<vector>
using namespace std ;
int main () {
    vector <int > v;
    int size ;
    int num;
    cout << "enter the size of vector" ;
    cin >> size ;
    for(int i = 0; i<size; i++){
        cin >> num; 
        v.push_back(num);
    }
    int min = v[0] ;
    int max = v [0] ;
    for(int i = 1; i<size; i++){
        if(v[i] > max)
        {
            max = v[i];
        }
    }
    for(int i = 1; i<size; i++){
        if(v[i] < min)
        {
            min = v[i];
        }
    }
    cout << min << " " << max ;
}
*/




// 6) Count how many times a given element appears in a vector.

/*#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    vector<int> v = {1,3,5,3,2,5};

    sort(v.begin(), v.end());

    for(int i = 0; i < v.size(); i++){
        int count = 1;

        while(i < v.size()-1 && v[i] == v[i+1]){
            count++;
            i++;
        }

//v = {1,2,3}
//index: 0 1 2
//When i = 2 (last element)
//v[i+1] would be invalid

        cout << v[i] << " appears " << count << " times" << endl;
    }
}
*/
/*
#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> v = {1,3,5,3,2,5};

    int element = 3;
    int count = 0;

    for(int i = 0; i < v.size(); i++){
        if(v[i] == element){
            count++;
        }
    }

    cout << element << " appears " << count << " times";
}*/



// 7) Remove all duplicate elements from a vector.
/*
#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {1,3,3,3,5,4,2,6};

    set<int> s(v.begin(), v.end());
    
    for(int x : s){
        cout << x << " ";
    }
}*/


/*#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {1,3,3,3,5,4,2,6};

    for(int i = 0; i < v.size(); i++){
        for(int j = i + 1; j < v.size(); j++){
            if(v[i] == v[j]){
                v.erase(v.begin() + j);
                j--;
            }
        }
    }

    for(int x : v){
        cout << x << " ";
    }
}*/



//  8) Rotate a vector to the right by k positions.
/*
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {1,2,3,4,5};
    int k = 2;

    rotate(v.rbegin(), v.rbegin() + k, v.rend());

    for(int x : v){
        cout << x << " ";
    }
}*/


// 9)Merge two vectors and sort the resulting vector.
/*
#include<bits/stdc++.h>
using namespace std ;
int main () {
    vector <int > v1 = {7,8,9,10} ;
    vector <int> v2 = {1,2,3,4,5};
    for(int i =0; i<v2.size() ; i++){
        v1.push_back(v2[i]);
    }
    sort(v1.begin() , v1.end());
    for(int i =0; i<v1.size() ; i++){
        cout << v1[i] << " " ;
    }
}
*/


//  10) Find the second largest element in a vector (without sorting).
/*
#include<bits/stdc++.h>
using namespace std;
int main () {

    vector<int> v = {1,2,6,3,4,5};
    int greatest = 0;
    int sec_greatest = 0;
    for(int i = 1; i<v.size(); i++){
         if(v[i] > greatest){
            greatest = v[i];
         }
    }
    for(int i = 1; i<v.size(); i++){
         if(v[i] > sec_greatest){
            if(v[i] == greatest){
                continue;
            }
            sec_greatest = v[i];
         }
    }
    cout << sec_greatest ;
}*/

/*
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {1,2,6,3,4,5};

    int largest = INT_MIN;
    int second = INT_MIN;

    for(int i = 0; i < v.size(); i++){
        if(v[i] > largest){
            second = largest;
            largest = v[i];
        }
        else if(v[i] > second && v[i] != largest){
            second = v[i];
        }
    }
    cout << second;
}
    */










//  5), 10) ,11)

// 1) Create a vector<int> and use an iterator to print all elements.
/*
#include<bits/stdc++.h>
using namespace std ;
int main () {
    vector<int> v;
    v = {1,2,3,4,5,6};
    vector<int> :: iterator x = v.begin();
    for(int i = 0; i<v.size(); i++){
        cout << *(x) << " ";
        x++;
    }
}*/

/*
#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {1,2,3,4,5,6};

    for(vector<int>::iterator it = v.begin(); it != v.end(); it++){
        cout << *it << " ";
    }
}
*/



// 2) Read n elements into a vector and use an iterator to calculate the sum of elements.
/*
#include<bits/stdc++.h>
using namespace std ;
int main () {
    int n;
    cout << "enter the size of an vector";
    cin >> n;
    vector < int > v(n) ;
    for(int i = 0 ; i < n ; i ++){
        cin >> v[i];
    }
    int sum = 0;
    for(vector<int>:: iterator x = v.begin(); x != v.end(); x++){
        sum = sum + *x;
    }
    cout << sum ;
}*/


// 3) Use an iterator to count how many elements are even in a vector.
/*
#include<bits/stdc++.h>
using namespace std;
int main () {
    vector<int>v={1,2,3,4,5,6};
    int even = 0;
    for(vector<int>:: iterator x = v.begin() ; x != v.end() ; x++){
        if(*(x)%2 == 0){
                 even++;
        }
    }
    cout << even ;
}*/


// 4) Use an iterator to find the maximum element in a vector.
/*
#include<bits/stdc++.h>
using namespace std;
int main () {
    vector<int>v={1,2,3,4,5,6};
    int max = v[0];
    for(vector<int>:: iterator x = v.begin() ; x != v.end() ; x++){
        if(*(x) > max){
                 max = *(x);
        }
    }
    cout << max ;
}
*/


// 5) Use an iterator to reverse print all elements of a vector.
/*
#include<bits/stdc++.h>
using namespace std ;
int main () {
    vector<int> v = {1,2,3,4,5,6};
    for(vector<int>:: reverse_iterator x = v.rbegin() ; x != v.rend() ; x++ ){
        cout << *(x) << " ";
    }
}*/


// 6) Given a vector, use an iterator to replace all negative numbers with 0.
/*
#include<bits/stdc++.h>
using namespace std;
int main () {
    int n ;
    cout << "enter the sze of the vector" ;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n ; i++){
        cin >> v [i] ;
    }
    for(vector<int>:: iterator x = v.begin() ; x != v.end() ; x++){
        if(*(x) < 0){
            *(x) = 0;
        }
    }
    for(vector<int>:: iterator x = v.begin() ; x != v.end() ; x++){
        cout << *(x) << " " ;
        }
}*/



// 7) Use iterators to copy elements from one vector to another vector.
/*
#include<bits/stdc++.h>
using namespace std;
int main () {
    vector<int>v ={1,2,3,4};
    vector<int>v2 ;
    v2.insert(v2.begin(), v.begin(), v.end());
    for(vector<int>:: iterator x = v2.begin() ; x != v2.end() ; x++){
        cout << *(x) << " " ;
        }
}*/


// 8) Use iterators to remove all occurrences of a given number from a vector.
/*
#include<bits/stdc++.h>
using namespace std;
int main () {
    vector<int>v={1,2,3,4,5,6};
    int w;
    cout << "enter what number that you need to erase" ;
    cin >> w;
    for(vector<int>:: iterator x = v.begin() ; x != v.end() ; x++){
        if(*x == w ){
                 v.erase(x) ;

        }
        
    }
    for(vector<int>:: iterator x = v.begin() ; x != v.end() ; x++){
         cout << *(x) << " " ;
    }
}*/


//Using iterators, insert an element at a specific position in a vector.
/*
#include<bits/stdc++.h>
using namespace std;
int main () {
    vector<int>v={1,2,3,4,5,6};
    int w;
    int u;
    cout << "enter the position where you need to insert" << endl;
    cin >> u;
    cout << "enter what number that you need to insert"  << endl ;
    cin >> w;
    v.insert(v.begin() + u,w);
    for(vector<int>:: iterator x = v.begin() ; x != v.end() ; x++){
         cout << *(x) << " " ;
    }
}*/


// 10) Use iterators to remove duplicate elements from a vector.
/*
#include<bits/stdc++.h>
using namespace std;

int main() {

    vector<int> v = {1,2,3,2,4,5,3,6};

    for(auto it = v.begin(); it != v.end(); it++){
        for(auto jt = it + 1; jt != v.end();  ){
            if(*it == *jt){
                 v.erase(jt);   // remove duplicate
            }
            else{
                jt++;
            }
        }
    }

    for(auto it = v.begin(); it != v.end(); it++){
        cout << *it << " ";
    }
}*/



// 11) Use iterators to rotate elements of a vector to the left by k positions.
/*
#include<bits/stdc++.h>
using namespace std;

int main() {

    vector<int> v = {1,2,3,4,5,6};
    int k;

    cout << "Enter k value: ";
    cin >> k;

    rotate(v.begin(), v.begin() + k, v.end());

    for(vector<int>::iterator it = v.begin(); it != v.end(); it++){
        cout << *it << " ";
    }
}*/


//  12) Using iterators, merge two sorted vectors into a single sorted vector.
/*
#include<bits/stdc++.h>
using namespace std;

int main() {

    vector<int> v = {1,2,3,4,5,6};
    vector<int> v1 = {7,8,9};
    v.insert(v.end() , v1.begin() , v1.end());
    sort(v.begin() , v.end());
     for(vector<int>::iterator it = v.begin(); it != v.end(); it++){
        cout << *it << " ";
    }
}*/


/*
#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int> v = {1,2,3,4,5,6};
    vector<int> v1 = {7,8,9};
    vector<int> result;
    merge(v.begin(), v.end(), v1.begin(), v1.end(), back_inserter(result));
     for(vector<int>::iterator it = result.begin(); it != result.end(); it++){
        cout << *it << " ";
    }
}
*/



// 13) Use iterators to find the second largest element in a vector.
/*
#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int> v = {1,2,3,4,5,6};
    int max = 0;
    int sec_max = 0;
     for(vector<int>::iterator it = v.begin(); it != v.end(); it++){
        if(*it > max){
            max = *it ;
        }

    }
    for(vector<int>::iterator it = v.begin(); it != v.end(); it++){
        if(*it > sec_max && *it < max){
            sec_max = *it ;
        }

    }
    cout << sec_max ;
}*/


/*
#include<bits/stdc++.h>
using namespace std;

int main() {

    vector<int> v = {1,2,3,4,5,6};

    int max = INT_MIN;
    int sec_max = INT_MIN;

    for(vector<int>::iterator it = v.begin(); it != v.end(); it++){
        if(*it > max){
            max = *it;
        }
    }

    for(vector<int>::iterator it = v.begin(); it != v.end(); it++){
        if(*it > sec_max && *it < max){
            sec_max = *it;
        }
    }

    cout << sec_max;
}
    */



// 14) Traverse a map<int,int> using iterators and print key–value pairs.
/*
#include<bits/stdc++.h>
using namespace std;

int main() {

    map<int,int> m;

    m[1] = 10;
    m[2] = 20;
    m[3] = 30;
    m[4] = 40;

    for(map<int,int>::iterator it = m.begin(); it != m.end(); it++){
        cout << it->first << " " << it->second << endl;
    }
}*/


// 15) Use iterators to remove all elements greater than a given value from a vector.
/*
#include<bits/stdc++.h>
using namespace std;

int main() {

    vector<int> v = {1,2,3,4,5,6};
    int max;

    cout << "enter the max number after that you need to remove all elements: ";
    cin >> max;

    for(vector<int>::iterator it = v.begin(); it != v.end(); ){
        if(*it > max){
            it = v.erase(it);
        }
        else{
            it++;
        }
    }

    for(vector<int>::iterator it = v.begin(); it != v.end(); it++){
        cout << *it << " ";
    }
}*/






// 1) Create a list<int>, insert 5 elements using push_back(), and print all elements.
/*
#include<bits/stdc++.h>
using namespace std;
int main () {
    int n ;
    list<int> lis;
    cout << 
    for(int i =0; i < 5; i++){
        cin >> n;
        lis.push_back(n);
    }
    for(list<int> :: iterator it = lis.begin(); it != lis.end() ; it++){
        cout << *it  << " ";
    }
}
    */


// 2) Insert elements at the front and back of a list and display the list.
/*
#include<iostream>
#include<list>
using namespace std;
int main () {
    list<int>lis = {1,2,3,4,5} ;
    int beg ;
    cout << "enter the element that you need to insert at begining" ;
    cin >> beg;
    int end ;
    cout << "enter the element that you need to insert at end" ;
    cin >> end;
    lis.emplace_back(end);
    lis.emplace_front(beg);
    for(list<int> :: iterator it = lis.begin(); it != lis.end(); it++){
        cout << *it << " ";
    }

}*/


// 3) Count the number of elements in a list.
/*
#include<iostream>
#include<list>
using namespace std;
int main () {
    list<int>lis = {1,2,3,4,5} ;
    int count = 0;
    for(list<int> :: iterator it = lis.begin(); it != lis.end(); it++){
        count ++;
        
    }
    cout << count;

}*/



// 4) Print all elements of a list using an iterator.
/*
#include<iostream>
#include<list>
using namespace std;
int main () {
    list<int>lis = {1,2,3,4,5} ;
    for(list<int> :: iterator it = lis.begin(); it != lis.end(); it++){
        cout << *it << " ";
    }

}*/

// 5) Remove the first element and the last element from a list and print the updated list.
/*
#include<iostream>
#include<list>
using namespace std;
int main () {
    list<int>lis = {1,2,3,4,5} ;
    lis.pop_back();
    lis.pop_front();
    for(list<int> :: iterator it = lis.begin(); it != lis.end(); it++){
        cout << *it << " ";
    }

}*/



// 6) Search for a given element in a list and print whether it exists or not.
/*
#include<iostream>
#include<list>
using namespace std;

int main () {
    list<int> lis = {1,2,3,4,5};
    int num;
    cout << "enter the number that you need to search ";
    cin >> num;

    bool found = false;

    for(list<int>::iterator it = lis.begin(); it != lis.end(); it++){
        if(*it == num){
            found = true;
            break;
        }
    }

    if(found){
        cout << "Found";
    }
    else{
        cout << "Not found";
    }
}*/



// 7) Reverse a list and print the result.
/*
#include<bits/stdc++.h>
using namespace std;
int main () {
    list<int>lis = {1,2,3,4,5,5};
    for(list<int> :: reverse_iterator it = lis.rbegin(); it != lis.rend(); it++){
        cout << *it << " " ;
    }
}*/



// 8) Remove all even numbers from a list.
/*
#include<bits/stdc++.h>
using namespace std;
int main () {
       list<int> lis = {1,3,5,77,8};
        for(list<int>::iterator it = lis.begin(); it != lis.end(); it++){
        if(*it % 2 == 0 ){
            it = lis.erase(it);
        }
    }
    for(list<int>::iterator it = lis.begin(); it != lis.end(); it++){
        cout << *it << " " ;
        }
    }*/



// 9) Insert an element at a specific position in a list using iterators.;
/*
#include<iostream>
#include<list>
using namespace std;

int main () {
    list<int> lis = {1,2,3,4,5};

    int a,b;
    cout << "enter the position where you need to enter ";
    cin >> a;

    cout << "enter the number that you need to add ";
    cin >> b;

    list<int>::iterator it = lis.begin();

    advance(it, a);   // move iterator to position

    lis.insert(it, b);

    for(list<int>::iterator it = lis.begin(); it != lis.end(); it++){
        cout << *it << " ";
    }
}*/

/*
#include<iostream>
#include<list>
using namespace std;

int main() {
    list<int> lis = {1,2,3,4,5};

    int pos, num;
    cout << "Enter position: ";
    cin >> pos;

    cout << "Enter number: ";
    cin >> num;

    list<int>::iterator it = lis.begin();

    for(int i = 0; i < pos; i++) {
        it++;
    }

    lis.insert(it, num);

    for(list<int>::iterator it = lis.begin(); it != lis.end(); it++) {
        cout << *it << " ";
    }
}
*/



// 10) Remove all duplicate elements from a list.
//Remove all duplicate elements from a list.
/*
#include<bits/stdc++.h>
using namespace std;

int main () {
    list<int> lis = {1,2,2,5,6};

    for(auto it = lis.begin(); it != lis.end(); it++){

        auto jt = it;
        jt++;   // move to next element

        while(jt != lis.end()){
            if(*it == *jt){
                jt = lis.erase(jt);
            }
            else{
                jt++;
            }
        }
    }

    for(list<int>::iterator it = lis.begin(); it != lis.end(); it++){
        cout << *it << " ";
    }
}*/


// 11) Merge two lists and print the resulting list.
/*
#include<bits/stdc++.h>
using namespace std;
int main () {
    list<int> l1= {1,2,3,4,5};
    list<int> l2 = {6,7,8};
    l1.merge(l2);

//  l1.insert(l1.end(), l2.begin(), l2.end());   other method

    for(list<int>::iterator it = l1.begin(); it != l1.end(); it++){
        cout << *it << " ";
    }
}*/


// 12) Sort a list in ascending order.
/*
#include<bits/stdc++.h>
using namespace std;
int main () {
    list<int> l1= {1,2,3,7,44,4,5};
    l1.sort();
    for(list<int>::iterator it = l1.begin(); it != l1.end(); it++){
        cout << *it << " ";
    }
}*/
/*
#include<bits/stdc++.h>
using namespace std;

int main() {
    list<int> l1 = {1,2,3,7,44,4,5};

    for(auto it = l1.begin(); it != l1.end(); it++){
        for(auto jt = next(it); jt != l1.end(); jt++){
            if(*it > *jt){
                swap(*it, *jt);
            }
        }
    }

    for(int x : l1)
        cout << x << " ";
}*/


// 13) Split a list into two lists: one containing even numbers and the other containing odd numbers.
/*
#include<bits/stdc++.h>
using namespace std;
int main () {
    list<int> lis = {1,2,3,4,5,6};
    list<int> even ;
    list<int> odd;
    for(auto it = lis.begin(); it != lis.end(); it++){
        if(*it % 2 == 0){
            even.push_back(*it);
        }
        else{
            odd.push_back(*it);
        }

    /*
    easier and shorter
        for(int x : lis){
    if(x % 2 == 0)
        even.push_back(x);
    else
        odd.push_back(x);
    }*/

/*

    }
    for(auto it = even.begin(); it != even.end(); it++){
        cout << *it << " " ;
    }
    cout << endl;
    for(auto it = odd.begin(); it != odd.end(); it++){
        cout << *it << " " ;
    }

}
*/

/*
#include<bits/stdc++.h>
using namespace std;

int main() {
    list<int> lis = {1,2,3,4,5,6};

    cout << "Even numbers: ";
    for(auto it = lis.begin(); it != lis.end(); it++){
        if(*it % 2 == 0){
            cout << *it << " ";
        }
    }

    cout << endl;

    cout << "Odd numbers: ";
    for(auto it = lis.begin(); it != lis.end(); it++){
        if(*it % 2 != 0){
            cout << *it << " ";
        }
    }
}*/


//Remove all elements from a list that are greater than a given value.
/*
#include<bits/stdc++.h>
using namespace std;

int main() {
    list<int> l1 = {1,2,3,7,44,4,5};

    cout << "enter the number that you need to remove greater than that elements ";
    int num;
    cin >> num;

    for(auto it = l1.begin(); it != l1.end(); ){
        if(*it > num){
            it = l1.erase(it);   // erase current element
        }
        else{
            it++;
        }
    }

    for(int x : l1)
        cout << x << " ";
}
*/


//Traverse a list and replace all negative numbers with their absolute values.
/*
#include<bits/stdc++.h>
using namespace std;

int main() {
    list<int> l1 = {1,2,3,7,-9,44,4,5};

    for(auto it = l1.begin(); it != l1.end(); it++){
        if(*it < 0){
            *it = abs(*it);   // replace with absolute value
        }
    }

    for(int x : l1)
        cout << x << " ";
}

*/


