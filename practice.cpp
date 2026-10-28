/*
#include<iostream>
using namespace std;
int main (){
    cout << "Hello";
    return 0;
}*/



// #include<iostream>
// using namespace std;
// int main () {
//     int n, m;
//     cout << "enter two number" << endl;
//     cin >> n >> m;
//     cout << n + m;
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int age;
//     cout << "Enter the age" << endl ;
//     cin >> age;
//     if(age > 18){
//         cout << "eligible for vote" ;
//     }
//     else{
//         cout << "not eligible" ;
//     }
//     return 0;
// }





// #include<bits/stdc++.h>
// using namespace std;
// int main () {
//     int arr[5];
//     int n = 5;
//     int num;
//     for(int i = 0; i < n; i++){
//         cout << "enter the " << i+1 << " number" << endl;
//         cin >> num;
//         arr[i] = num;
//     }
//     for(int i = 0; i < n; i++){   
//         cout << arr[i] << endl;
//     }
// }

/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n = 543;
    int rem = 0;
    int rev = 0;
    for(int i = n; i > 0;  ){
        rem = i % 10;
        rev = rev * 10 + rem;
        i = i / 10;
    }
    cout << rev;
}
*/


//Read three sides of a triangle and check whether it is valid, and if valid, determine its type.
/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a, b, c;
    cout << "Enter the 1st sides of the triangle" << endl;
    cin >> a;
    cout << "Enter the 2nd sides of the triangle" << endl ;
    cin >> b;
    cout << "Enter the 3rd sides of the triangle"<< endl ;
    cin >> c;
    if(a+b > c && b+c > a && a+c > b){
        cout << "Valid Triangle";
    }
    else{
        cout << "Invalid Triangle";
    }
}
*/


//Read an integer n and print all numbers between 1 and n that are both prime and palindrome.
/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cout << "enter a number";
    cin >> num;
    int rev = 0;
    int sum = 0;
    for(int i = 2; i<num; i++){
        for(int j = i; j>0;){
            sum = j%10;
            rev = rev * 10 + sum;
            j = j/10;
        }
        int count =0;
        if(i==rev){
            for(int k = 2; k<rev; k++){
                if(rev%k == 0){
                    count++;
                }
            }
            if(count == 0){
                cout << "The " << rev <<  " is both plindrom and prime" << endl;
            }
            else{
                cout << "The " << rev <<  " is not plindrom and prime" << endl;
            }
        }
        rev = 0;
        sum = 0;    
        count = 0;
    }   
}*/

/*
#include<bits/stdc++.h>
using namespace std;
    void hello(){
        cout << "Hi";
    }
    int main(){
        hello();
    }
*/

/*
#include<bits/stdc++.h>
using namespace std;
function Hello(){
    cout<< "Hello";
}
int main(){
    return Hello();
}*/


/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    for(int i = 0; i <100 ; i++){
        cout << "Jaghadish" << endl ;
    }
}*/


/*
#include<bits/stdc++.h>
using namespace std;
int sum(int num1, int num2){
    return num1 + num2;
}
int main(){
    cout << sum(5,6);
    return 0;
}*/



/*
#include<bits/stdc++.h>
using namespace std;
void numm(int num){
    cout << num << endl;
    num += num + 5;
    cout << num << endl;
    num += num + 5;
    cout << num << endl;    
}
int main () {
    int num = 10;
    numm(num);
    cout << num;
    return 0;
    
}*/


/*
#include<bits/stdc++.h>
using namespace std;
void numm(int arr[], int n){
    arr[0] += 100;
    cout << arr[0] << endl;
}
int main () {
    numm(10);
    
}*/


#include<bits/stdc++.h>
using namespace std;

//function definition
int printHello() {
cout << "hello\n";
return 3;

}

int main() {
//function call / invoke

cout << printHello() << endl;

return 0;
}