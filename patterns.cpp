//  11)


/*
* * * * 
* * * * 
* * * *
* * * *
*/

/*#include <iostream> 
using namespace std;
int main () {
    for(int i = 0 ; i < 4; i++){
        for (int j = 0; j < 4; j++){
            cout << "* " ;
        }
        cout << endl ;
    }
}*/



/*
*
* * 
* * * 
* * * *
*/

/*#include <iostream> 
using namespace std;
int main () {
    for(int i = 0 ; i < 4; i++){
        for (int j = 0; j < i+1; j++){
            cout << "* " ;
        }
        cout << endl ;
    }
}*/



/*
1
1 2 
1 2 3
1 2 3 4
1 2 3 4 5
*/

/*#include <iostream> 
using namespace std;
int main () {
    for(int i = 0 ; i < 5; i++){
        for (int j = 1; j < i+2; j++){
            cout << j << " " ;
        }
        cout << endl ;
    }
}*/



/*
1
2 2 
3 3 3
4 4 4 4
5 5 5 5 5
*/

/*#include <iostream> 
using namespace std;
int main () {
    for(int i = 1 ; i < 6; i++){
        for (int j = 1; j < i+1; j++){
            cout << i << " " ;
        }
        cout << endl ;
    }
}*/



/*
* * * *
* * * 
* * 
*



*/

/*#include <iostream> 
using namespace std;
int main () {
    for(int i = 0; i < 5; i++){
        for (int j = i; j < 5; j++){
            cout << "* " ;
        }
        cout << endl ;
    }
}*/


/*
1 2 3 4 5
1 2 3 4 
1 2 3
1 2
1
*/

/*#include <iostream> 
using namespace std;
int main () {
    for(int i = 0; i < 5; i++){
        for (int j = 1; j < 6-i; j++){
            cout << j << " " ;
        }
        cout << endl ;
    }
}*/


/*
    *
   *** 
  ***** 
 ******* 
*********

*/

/*#include<iostream>
using namespace std ;
int main () {
    string result = "" ;
    for(int i = 0; i < 5; i++){
        for(int j=0; j<4-i; j++){
            result = result + ' ' ;
        }
        for(int k =1; k<=2*i+1; k++){
            result = result + '*' ;
        }
        cout << result << endl ;
        result = "";
    }
    return 0;
}*/




/*
*********
 ******* 
  ***** 
   *** 
    *
*/

/*#include <iostream> 
using namespace std;
int main () {
    char a = ' ' ;
    char b = '*' ;
    string result = "";
   for(int i = 0; i < 5; i++){
        for(int j=0; j<i; j++){
            result = result + a ;
         }
        for (int j = 9-(2*i); j >0; j--){
            result = result + b;
        }
        cout << result << endl;
        result = "";
    }
        
    return 0;
    }*/
    

/*
    *
   *** 
  ***** 
 ******* 
*********
*********
 ******* 
  ***** 
   *** 
    *

*/


/*
#include<iostream>
using namespace std ;
int main () {
    string result = "" ;
    for(int i = 0; i < 5; i++){
        for(int j=0; j<4-i; j++){
            result = result + ' ' ;
        }
        for(int k =1; k<=2*i+1; k++){
            result = result + '*' ;
        }
        cout << result << endl ;
        result = "";
    }
    result = "" ;
    for(int a = 0; a < 5; a++){
        for(int b=0; b<a; b++){
            result = result + ' ' ;
         }
        for (int c = 9-(2*a); c >0; c--){
            result = result + '*';
        }
        cout << result << endl;
        result = "";
    }
    return 0;
}*/


/*
*
**
***
****
*****
*****
****
***
**
*

*/

/*#include<iostream>
using namespace std ;
int main () {
    string result = "" ;
    for(int i = 0; i < 5; i++){
        for(int k =0; k<=i; k++){
            result = result + '*' ;
        }
        cout << result << endl ;
        result = "";
    }
    result = "" ;
    for(int a = 0; a < 5; a++){
        for (int c = a; c < 5; c++){
            result = result + '*';
        }
        cout << result << endl;
        result = "";
    }
    return 0;
}*/



/*
11)
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1
*/

/*#include<iostream>
using namespace std;
int main (){
    int start = 1;
    for(int i = 0; i<5; i++){
        if(i%2 == 0){
            start = 1;
        }
        else{
            start = 0;
        }
        for(int j =0; j<=i ; j++){
            cout << start;
            start = 1 - start;
        }
        cout << endl ;
    }
    return 0;
}*/



/*
1      1
12    21 
123  321 
12344321
*/

/*
#include<iostream>
using namespace std;
int main (){
    for(int i = 0; i<4; i++){
        for(int j =0; j<=i ; j++){
            cout << j+1 ;
        }
        for(int k =6-2*i; k>0 ; k--){
            cout << ' ' ;
        }
        for(int l =0; l<=i ; l++){
            cout << i+1-l ;
        }
        cout << endl ;
    }
    return 0;
}*/


/*
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
*/

#include<iostream>
using namespace std;
int main (){
    for(int i = 0; i<5; i++){
        for(int j =0; j<=i ; j++){
            if(i%2 ==0){
                cout << 2*i + j +1 << ' ' ;
            }
            else{
                cout << 2*i + j << ' ' ;
            }
            
        }
        
        cout << endl ;
    }
    return 0;
}