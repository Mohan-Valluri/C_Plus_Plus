//Create a set<int>, insert 5 elements, and print all elements.
/*
#include<bits/stdc++.h>
using namespace std;
int main (){
    set<int> s;
    int n = 5;
    int in;
    for(int i = 0; i < n ; i++){
        cout << "enter the " << i+1 << " element";
        cin >> in;
        s.insert(in);
    }
    for(set < int > :: iterator it = s.begin(); it != s.end(); it++){
        cout << *it << " ";
    }
}*/


//Read n integers from the user and store them in a set. Print the number of unique elements.
/*
#include<bits/stdc++.h>
using namespace std;
int main (){
    set<int> s;
    int n ;
    cout << "enter the size of list";
    cin >> n;
    int in;
    for(int i = 0; i < n ; i++){
        cout << "enter the " << i+1 << " element";
        cin >> in;
        s.insert(in);
    }
    cout << "Number of unique elements: " << s.size();
}*/


//Create a set<char>, insert characters of a string, and print the distinct characters.
/*
#include<bits/stdc++.h>
using namespace std;
int main () {
    set<char> s;
    string str = "Mohan";
    for(int i = 0; i < str.length(); i++){
        s.insert(str[i]);
    }
    for(char x : s){
        cout << x << " " ;
    }
}*/



//Read n strings and store them in a set<string>. Print them in lexicographical order.

/*
#include<bits/stdc++.h>
using namespace std;
int main () {
    set <string> s;
    string str;
    int n;
    cout << "enter the number of strings that you need to add in the set" << endl ;
    cin >> n;
    for(int i = 0 ; i<n; i ++){
        cout << "enter the " << i+1 << " String" << endl;
        cin >> str;
        s.insert(str);
    }
    for(string x : s){
        cout << x << " ";
    }
}*/




//Given a list of integers, insert them into a set and check whether a given number exists in the set.
/*
#include<bits/stdc++.h>
using namespace std;
int main () {
    list<int> l = {1,2,3,4,5};
    set <int> s(l.begin(), l.end());
    cout<< "enter the number that you need to search";
    int n;
    cin >> n;
    int count = 0;
    for(int x : s){
        if(x == n){
            cout << "found";
            count ++;
            break;
        }
    }
    if(count == 0){
        cout << "Not found";
    }
}*/


/*
#include<bits/stdc++.h>
using namespace std;
int main () {
    list<int> l = {1,2,3,4,5};
    set <int> s(l.begin(), l.end());
    cout<< "enter the number that you need to search";
    int n;
    cin >> n;
    int count = 0;
    for(int x : s){
        if(s.find(n) != s.end()){     /* It searches weather the element present or not 
            cout << "found"; 
            break;
        }
        else{
            cout << "Not Found";
            break;
        }
    }
}*/



/*Store pair<int, int> elements in a set and print all pairs in sorted order.*/
/*
#include<bits/stdc++.h>
using namespace std;
int main (){
    set<pair<int,int>>s = {{1,2},{3,1}, {4,1}, {1,1}};
    for(auto x : s){
        cout << x.first << " " << x.second << endl;
    }
}
*/


/*Read n integers and store them in a set. Print the second smallest element.*/
/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int>s;
    cout << "enter the size of list" << endl;
    int n;
    cin >> n;
    int num;
    for(int i =0; i < n; i++){
        cout << "enter the " << i+1 << " Number into the list" << endl;
        cin >> num;
        s.insert(num);
    }
    if(s.size() < 2){
    cout << "No second smallest element";
    }
    int count = 0;
    for(set<int>::iterator it = s.begin() ; it != s.end(); it ++){
        if(count == 1){
            cout <<"The second smallest element is " << *it;
            break;          
        }
        count++;
    }
}*/

/*
if(s.size() < 2){
    cout << "No second smallest element";
}
else{
    cout << "The second smallest element is " << *next(s.begin());
}*/



//Given a string, use a set<char> to determine whether all characters are unique.
/*
#include<bits/stdc++.h>
using namespace std;
int main () {
    cout << "enter a string";
    string s;
    cin >> s;
    set < char > c;
    for(int i =0; i < s.length(); i ++){
        c.insert(s[i]);
    }
    if(s.length() == c.size()){
        cout << "all characters are unique.";
    }
    else{
        cout << "all characters are not unique.";
    }
}
*/


//Store names in a set<string> and print them in reverse alphabetical order.
/*
#include<bits/stdc++.h>
using namespace std;
int main () {
    set<string> s;
    cout << "enter how many names that you need to enter into string" << endl;
    int n;
    cin >> n;
    string ss;
    for(int i = 0; i < n; i ++ ){
        cout << "enter the "  << i +1 << " name into the list" << endl;
        cin >> ss;
        s.insert(ss);
    }
    for(auto it = s.rbegin(); it != s.rend(); it++){
    cout << *it << " ";
}
}*/
/*
auto it = s.end();
it--;   // move to last element

for( ; ; it--){
    cout << *it << " ";
    if(it == s.begin())
        break;
}*/



/*Given two sets of integers, find their union.*/
/*
#include<bits/stdc++.h>
using namespace std;
int main (){
    set<int>s1 = {1,2,3,4,5} ;
    set<int>s2 = {1,4,2,6,7} ;
    for(set<int> :: iterator it = s1.begin(); it!= s1.end(); it++){
        s2.insert(*it);
    }
    for(set<int>:: iterator itt = s2.begin(); itt!= s2.end(); itt++){
        cout << *itt << " ";
    }
}*/


/*s2.insert(s1.begin(), s1.end());*/
/*Best Practice (using new set)
set<int> result;

result.insert(s1.begin(), s1.end());
result.insert(s2.begin(), s2.end());

for(int x : result){
    cout << x << " ";
}*/


//Given two sets of integers, find their intersection.
/*
#include<bits/stdc++.h>
using namespace std;
int main (){
    set<int>s1 = {1,2,3,4,5} ;
    set<int>s2 = {1,4,2,6,7} ;
    set<int>s3;
    for(set<int> :: iterator it = s1.begin(); it != s1.end(); it++){
        for(set<int> :: iterator itt = s2.begin(); itt != s2.end(); itt++){
            if(*it == *itt){
                s3.insert(*it);
            }
        }
    }
    for(set<int> :: iterator ittt = s3.begin(); ittt != s3.end(); ittt++ ){
        cout << *ittt << " ";
    }
}*/


/*Given two sets of integers, find the difference (A - B).*/
/*
#include<bits/stdc++.h>
using namespace std;
int main (){
    set<int>s1 = {1,2,3,4,5} ;
    set<int>s2 = {1,4,2,6,7} ;
    set<int>s3;
    for(set<int> :: iterator it = s1.begin(); it != s1.end(); it++){
        for(set<int> :: iterator itt = s2.begin(); itt != s2.end(); itt++){
            if(*it == *itt){
                s3.insert(*it);
            }
        }
    }   
    for(set<int> :: iterator ittt = s3.begin(); ittt != s3.end(); ittt++ ){
        s1.erase(*ittt );
    }
    for(set<int> :: iterator itttt = s1.begin(); itttt != s1.end(); itttt++ ){
        cout<< *itttt << " ";
    }
}*/

/*
#include<bits/stdc++.h>
using namespace std;

int main (){
    set<int> s1 = {1,2,3,4,5};
    set<int> s2 = {1,4,2,6,7};

    for(int x : s2){
        s1.erase(x);   // remove if exists
    }

    for(int x : s1){
        cout << x << " ";
    }
}*/


/*Store pair<string, int> in a set where the string is a student name and the integer is marks, and print all students sorted by name.*/
/*
#include<bits/stdc++.h>
using namespace std;

int main (){
    set<pair <string,int>> s = {{"Mohan",20}, {"sailu",100}, {"Tarun", 101}, {"Lucky", 105}};
    for(auto x : s){
        cout << x.first << " " << x.second << endl;
    }
}*/




/*Given a sentence, store all unique words in a set<string> and print them.*/
/*
#include<bits/stdc++.h>
using namespace std;

int main() {
    cout << "Enter a sentence: ";
    
    string sentence;
    getline(cin, sentence);   // read full line

    set<string> s;
    string word = "";

    for(int i = 0; i < sentence.length(); i++){
        if(sentence[i] != ' '){
            word += sentence[i];
        }
        else{
            if(word != ""){
                s.insert(word);
                word = "";
            }
        }
    }

    // insert last word
    if(word != ""){
        s.insert(word);
    }

    cout << "Unique words:\n";
    for(string x : s){
        cout << x << endl;
    }
}*/


/*Read a list of integers and determine whether the sequence contains duplicate elements using a set.*/
/*
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    set<int> s;
    int x;
    bool duplicate = false;

    for(int i = 0; i < n; i++){
        cin >> x;

        if(s.count(x)){
            duplicate = true;
            break;
        }
        s.insert(x);
    }

    if(duplicate)
        cout << "Duplicates found";
    else
        cout << "No duplicates";
}*/


/*
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "enter the size of list" << endl;
    cin >> n;
    int num;
    set<int> s;
    for(int i = 0; i < n; i++ ){
        cout << "enter the " << i+1 << " number into list" << endl;
        cin >> num;
        s.insert(num);
    }
    if(s.size() == n){
        cout << "No duplicates";
    }
    else{
        cout << "Duplicates";
    }
    
}
*/











/* 6) 


/* Maps */

/*Create a map<int, int>, insert 5 key–value pairs, and print all elements.*/
/*
#include<bits/stdc++.h>
using namespace std;
int main () {
    map<int, int> m = {{1,2},{8,3},{3,4},{4,5},{5,6}};
    for(auto x : m){
        cout << x.first << " " << x.second << endl;
    }
}*/


/*Read n integers and store their frequency using a map<int, int>. Print each number with its count.*/
/*
#include<bits/stdc++.h>
using namespace std;
int main () {
    map <int,int>m ;
    cout << "how many numbers that you need to enter";
    int n, num;
    int count = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        cout << "enter the" << i+1 << " number";
        cin >> num;
        m[num] = m[num] + 1;

    }

     for(auto x : m){
    cout << "Number: " << x.first 
         << " Count: " << x.second << endl;
}

}*/


/*Create a map<char, int> and count the frequency of each character in a string.*/
/*
#include<bits/stdc++.h>
using namespace std;
int main () {
    map <char,int>m ;
    cout << "how many charecters that you need to enter" << endl;
    int n;
    char ch;
    int count = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        cout << "enter the " << i+1 << " charecter" << endl;
        cin >> ch;
        m[ch] = m[ch] + 1;

    }

     for(auto x : m){
    cout << "charecter: " << x.first 
         << " Count: " << x.second << endl;
}
}*/


/* 4) Read n strings and store them in a map<string, int> where the value is the length of the string. Print all pairs.*/
/*
#include<bits/stdc++.h>
using namespace std;
int main () {
    map <string,int>m ;
    cout << "how many strings that you need to enter" << endl;
    int n;
    string s;
    int count = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        cout << "enter the " << i+1 << " string" << endl;
        cin >> s;
        m[s] = s.length();

    }

     for(auto x : m){
    cout << "charecter: " << x.first 
         << " Count: " << x.second << endl;
}
}*/



/* 5) Given a list of integers, use a map to find the first non-repeating element.*/
/*
#include<bits/stdc++.h>
using namespace std;
int main () {
    list <int> l = {1,6,3,4,2,4,3,4,1};
    map <int,int> m;
    int count = 0;
    for(auto x : l){
        m[x] = m[x] + 1;
    }
    
    for(auto x : m){  /*if we use map it shorted order so that we use list*/ 
    /*
        if(x.second == 1){
            cout << "the 1st non repeating integer is " << x.first ;
            break;
        }
}
}*/


/*
#include<bits/stdc++.h>
using namespace std;

int main() {
    list<int> l = {1,6,3,4,2,4,3,4,1};
    unordered_map<int,int> m;

    for(auto x : l){
        m[x]++;
    }

    for(auto x : l){        /*Here we used list because they ask for 1st non repeating element*/
    /*
        if(m[x] == 1){
            cout << "The 1st non-repeating integer is " << x;
            break;
        }
    }
}*/


/* 6) Store student names and marks using map<string, int> and print the student with highest marks.*/
/*
#include<bits/stdc++.h>
using namespace std;

int main () {
    map<string,int> m;

    cout << "How many students? ";
    int n;
    cin >> n;

    string s;
    int marks;

    for(int i = 0; i < n; i++){
        cout << "Enter student name: ";
        cin >> s;

        cout << "Enter marks: ";
        cin >> marks;

        m[s] = marks;
    }

    int highest = INT_MIN;
    string topper;

    for(auto x : m){
        if(x.second > highest){
            highest = x.second;
            topper = x.first;
        }
    }

    cout << "Topper: " << topper << " with marks " << highest;
}*/



/*Store student names and marks using map<string, int> and print all the student with highest marks to lowest marks*/
/*
#include<bits/stdc++.h>
using namespace std;

int main() {
    map<string,int> m;

    int n;
    cout << "Enter number of students: ";
    cin >> n;

    string name;
    int marks;

    // Input
    for(int i = 0; i < n; i++){
        cin >> name >> marks;
        m[name] = marks;
    }

    // Step 1: Move map to vector
    vector<pair<string,int>> v(m.begin(), m.end());

    // Step 2: Sort by marks (descending)
    sort(v.begin(), v.end(), [](pair<string,int> a, pair<string,int> b){
        return a.second > b.second;
    });

    // Step 3: Print
    cout << "\nStudents sorted by marks:\n";
    for(auto x : v){
        cout << x.first << " -> " << x.second << endl;
    }
}*/



/* 7) Given a sentence, use a map<string, int> to count the frequency of each word.*/

#include<bits/stdc++.h>
using namespace std;
int main () {
    map <string,int>m ;
    cout << "enter a sentence" << endl;
    string s;
    getline(cin, s);
    int count = 0;
    string ss;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == ' '){
                for(int j = 0;)
        }
        m[s] = s.length();

    }

     for(auto x : m){
    cout << "charecter: " << x.first 
         << " Count: " << x.second << endl;
}
}




/*How to take a sentence as an input*/
/*
#include<bits/stdc++.h>
using namespace std;

int main() {
    
    int n;
    cout << "enter a number";
    cin >> n;
    cin.ignore();  /*we must need to use this then only it takes input*/
    /*
    string s;
    cout << "Enter a sentence: ";
    getline(cin, s);

    cout << "You entered: " << s;
}*/