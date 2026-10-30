//Factorial of a number
/*
#include<bits/stdc++.h>
using namespace std;
int fact(int num){
    if(num == 0){
        return 1;
    }
    else{
        return num*fact(num-1);
    }
}
int main () {
    cout << "Enter the number for which you need the factorial.";
    int num ;
    cin >> num ;
    cout << "The factorial of the number " << num << " is" << endl;
    cout << fact(num);
}
*/

// Print namee N times
/*
#include<bits/stdc++.h>
using namespace std;
void name(int n){
    if(n == 0){
        return ;
    }
     cout << "mohan" << endl;
    name(n - 1);
}
int main(){
    cout << " How many times do you want to print the name?" <<endl;
    int n;
    cin >> n;
    name(n);
}*/


//print linearly from 1 to N
/*
#include<bits/stdc++.h>
using namespace std;
void num(int i, int n){
    if(i > n){
        return ;
    }
    else{
        cout << i << endl;
        num (i+1,n);
    }
}
int main (){
    cout << "Enter the number up to which you want.";
    int n; 
    cin >> n;
    num(1,n);
}*/


//Print Linearly from N-1



// Reverese of a number 
/*
#include<bits/stdc++.h>
using namespace std;

int sum = 0;   // global variable

void palin(int num){
    if(num == 0) return;

    int rem = num % 10;
    sum = sum * 10 + rem;

    palin(num / 10);
}

int main () {
    palin(456);
    cout << sum;
}*/



/*#include<bits/stdc++.h>
using namespace std;

int reverseNum(int num, int sum){
    if(num == 0) return sum;

    int rem = num % 10;
    return reverseNum(num/10, sum*10 + rem);
}

int main () {
    int result = reverseNum(456, 0);
    cout << result;
}*/


