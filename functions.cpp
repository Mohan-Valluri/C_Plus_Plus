//1. Function With Return Value
//👉 Returns a value using return

#include <iostream>
using namespace std;
int add() {
    int sum = 5+3;
    return sum;
}
int main() {
    cout << add();
}



//2. Function Without Return Value
//👉 Does not return anything (void)

/*#include<iostream>
using namespace std;
void nreturn() {
       cout << "hello" ;
}
int main () {
    nreturn();
}*/





//3. Function With Parameters
//👉 Takes input values

//1️⃣ Pass arguments (Best & Recommended)
/*#include <iostream>
using namespace std;
int add(int a , int b) {
    
    return a + b;
}
int main() {
    int a,b;
    cin >> a;
    cin >> b;
    cout << add(a,b);
}*/



//2️⃣ Take input inside function
/*#include <iostream>
using namespace std;
int add() {
    int a, b;
    cin >> a >> b;
    return a + b;
}

int main() {
    cout << add();
}*/


//3️⃣ Using global variables
/*#include <iostream>
using namespace std;

int a, b;

int add() {
    return a + b;
}

int main() {
    cin >> a >> b;
    cout << add();
}*/


//4️⃣ Using reference (advanced but important)
/*#include <iostream>
using namespace std;

void add(int &a, int &b) {
    cout << a + b;
}

int main() {
    int a, b;
    cin >> a >> b;
    add(a, b);

}*/



//5️⃣ Using pointer (advanced)
/*#include <iostream>
using namespace std;

int add(int *a, int *b) {
    return *a + *b;
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << add(&a, &b);
}*/



//4. Function Without Parameters
/*#include <iostream>
using namespace std;

void show() {
    cout << "No parameters";
}

int main() {
    show();
    return 0;
}*/



//Write a function to print "Hello World".
/*#include<iostream>
using namespace std;

string hi() {
    return "hello";
}

int main() {
    cout << hi();
}*/



/*#include<iostream>
using namespace std;

void hi() {
    cout << "hello";
}

int main() {
    hi();
}*/



//Write a function that takes an integer and returns its square.
/*#include<iostream>
using namespace std ;
void square () {
    int a;
    cin >> a;
    cout << a*a ;
    }
int main () {
    square() ;
}*/


/*#include<iostream>
using namespace std ;
void square (int a) {
    cin >> a;
    cout << a*a ;
    }
int main () {
    int a;
    square(a) ;
}*/


//Write a function to check whether a number is even or odd.
/*#include<iostream>
using namespace std;
void evenorodd () {
    cout<< "enter a numbers" ;
    int a ;
    cin >> a ;
    if(a%2 == 0){
        cout << "even number" ;

    }
    else{
        cout << "odd number" ;
    }
}
int main () {
    evenorodd() ;
}*/


/*#include <iostream>
using namespace std;
void check(int n) {
    if (n % 2 == 0)
        cout << "Even";
    else
        cout << "Odd";
}
int main() {
    int n;
    cout << "Enter a value ";
    cin >> n;
    check(n);
     return 0;
}*/

/*#include <iostream>
using namespace std;

int add() {
    return 5 + 3;
}

int main() {
    cout << add();
}



#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int main() {
    cout << add(4, 6);
}*/

//Write a function that takes two numbers and returns the larger one.

/*#include<iostream>
using namespace std;
int findgreater(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}
int main() {
    int a, b;
    cout << "enter two numbers" << endl ;
    cin >> a >> b;
    cout << "Greater number = " << findgreater(a, b);
    return 0;
}*/


/*#include <iostream>
using namespace std;
void lager(int a, int b) {
    if (a > b)
        cout << "Larger number =" << a;
    else
        cout << "Larger number =" << b;
}
int main() {
    int x, y;
    cout << "Enter two numbers:";
    cin >> x >> y;
    lager(x,y);
    return 0;*/

 // Write a function to calculate the sum of two numbers.  

 /*#include<iostream>
 using namespace std ;
 int sum(int a , int b){
    return a+b;
 }
 int main (){
    int a , b ;
    cout << "enter two numbers" << endl ;
    cin >> a >> b;
    cout << " the sum of two numbers = " << sum(a,b) ;
    return 0;
 }
*/

/*#include<iostream>
 using namespace std ;
 void sum(int a , int b){
    cout << " the sum of two numbers = " << a+b ;
 }
 int main (){
    int a , b ;
    cout << "enter two numbers" << endl ;
    cin >> a >> b;
    sum(a,b);
    return 0;
 }*/


 //Write a function to check whether a number is a prime number.
 /*#include<iostream>
 using namespace std;
 int prime(int a){
    int count = 0;
    for(int i = 2; i<a; i++){
        if(a%i == 0){
            count++ ;
        }
        
    }
    if(count == 0){
            cout << "prime number" ;
        }
        else{
            cout << "not prime number" ;
        }
 }
 int main(){
    int a;
    cout<< "enter a number " ;
    cin >> a;
    prime(a);
    return 0;
 }*/


 /*#include <iostream>
using namespace std;
void check(int n) {
    if (n <= 1) {
        cout << "Not Prime";
        return;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            cout << "Not Prime";
            return;
        }
    }
    cout << "Prime";
}
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    check(n);
    return 0;
}*/


/*
#include<iostream>
using namespace std;

bool isPrime(int a) {
    if (a <= 1) return false;

    for (int i = 2; i < a; i++) {
        if (a % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int a;
    cout << "Enter a number: ";
    cin >> a;

    if (isPrime(a)) {
        cout << "Prime number";
    } else {
        cout << "Not prime number";
    }

    return 0;
}*/


//Write a function to find the factorial of a number.
/*#include<iostream>
using namespace std ;
int fact(int n){
    int factt = 1;
    for(int i = 2 ; i<=n ; i++){
        factt = factt * i ;
       
    }
    return factt;
}
int main () {
    int n ;
    cout << "enter a number " ;
    cin >> n;
    cout << "Factorial = " << fact(n);  // ✅ print result

    return 0;
}*/


/*#include<iostream>
using namespace std ;
void fact(int n){
     int factt = 1;
    for(int i = 2 ; i<=n ; i++){
        factt = factt * i ;
       
    }
     cout << "the factorial of the number = " << factt ;
}
int main () {
    int n ;
    cout << "enter a number " ;
    cin >> n;
    fact(n);
    return 0;
}*/

//Write a function to reverse a number.
/*#include<iostream>
using namespace std ;
void reverse(int n){
    int rev = 0;
    int rem = 0;
    for(int i = n ; i>0 ; i= i/10){
        rem = i %10 ;
        rev = rev *10 + rem;
        rem = 0;
    }
     cout << "the reverse number = " << rev ;
}
int main () {
    int n ;
    cout << "enter a number " ;
    cin >> n;
    reverse(n);
    return 0;
}*/


//Write a function to find the sum of digits of a number.
/*#include<iostream>
using namespace std ;
void sum(int n){
    int sum = 0;
    int rem = 0;
    for(int i = n ; i>0 ; i= i/10){
        rem = i %10 ;
        sum = sum + rem;
        rem = 0;
    }
     cout << "the sum of digits = " << sum ;
}
int main () {
    int n ;
    cout << "enter a number " ;
    cin >> n;
    sum(n);
    return 0;
}*/



/*#include<iostream>
using namespace std;
int sum(int n){
    int sum = 0;
    int rem = 0;
    for(int i = n ; i>0 ; i= i/10){
        rem = i %10 ;
        sum = sum + rem;
        rem = 0;
    }
    return sum;
}
int main (){
    int n ;
    cout << "enter a number";
    cin >> n;
    cout << "the sum of digits in a number = " << sum(n);
    return 0;
}*/



//Write a function that takes a number and returns whether it is a palindrome.
/*#include<iostream>
using namespace std;
bool isPalindrome(int n) {
    int temp = n;
    int rev = 0;

    while (temp > 0) {
        int rem = temp % 10;
        rev = rev * 10 + rem;
        temp = temp / 10;
    }

    return (rev == n);
}

int main() {
    int num;
    cin >> num;

    if (isPalindrome(num)) {
        cout << "Palindrome";
    } else {
        cout << "Not Palindrome";
    }

    return 0;
}*/


//Write a function to return the n-th Fibonacci number (using iteration inside function).
/* 
#include<iostream>
using namespace std;
void fabonacci(int n){
    int first_term = 0;
    int secound_term = 1;
    int fabi = 0;
    
    for(int i = 2 ; i<n; i++){
        fabi = secound_term + first_term ;
        first_term = secound_term ;
        secound_term = fabi;
        
    }
    cout << fabi << " " ;
}
int main () {
    int n ;
    cout << "enter a number" ;
    cin >> n;
    fabonacci(n);
    return 0;
}*/


/*#include<iostream>
using namespace std;

int fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;

    int first = 0, second = 1, next;

    for (int i = 2; i <= n; i++) {
        next = first + second;
        first = second;
        second = next;
    }

    return second;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << fibonacci(n);

    return 0;
}*/



//Write a function to find the GCD of two numbers.
/*#include<iostream>
using namespace std ;
void gcd(int a, int b){
    int gcdd = 1;
    for(int i = 2; i <= a && i <= b; i++){
        if(a%i == 0 && b%i == 0){
            gcdd = i;
        }
    }
    cout << "GCD of 2 numbers " << gcdd ;
}
int main(){
    int a,b ;
    cout << "enter two numbers" ;
    cin >> a >> b ;
    gcd(a,b);
    return 0;
}*/


/*#include<iostream>
using namespace std;

int gcd(int a, int b){
    int gcdd = 1;
    for(int i = 1; i <= a && i <= b; i++){
        if(a % i == 0 && b % i == 0){
            gcdd = i;
        }
    }
    return gcdd;
}

int main(){
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "GCD = " << gcd(a, b);

    return 0;
}*/


//Write a function to find the LCM of two numbers using GCD.
/*#include<iostream>
using namespace std;

int gcd(int a, int b){
    int gcdd = 1;
    for(int i = 1; i <= a && i <= b; i++){
        if(a % i == 0 && b % i == 0){
            gcdd = i;
        }
    }
    return gcdd;
}
int main(){
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "GCD = " << gcd(a, b) << endl;
    cout << "LCM = " << (a*b)/gcd(a,b);
    return 0;
}*/



//Write a function that returns the count of prime numbers up to n.

/*
 #include<iostream>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false;

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int countPrimes(int n) {
    int count = 0;

    for (int i = 2; i <= n; i++) {
        if (isPrime(i)) {
            count++;
        }
    }
    return count;
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    cout << "Number of primes = " << countPrimes(n);
    return 0;
}*/


//Write a function to check whether a number is an Armstrong number.
/*
#include<iostream>
using namespace std;
int amstrong(int n){
    int rem = 0;
    int sum = 0;
    int count = 0;
    for(int i = n; i>0; i=i/10){
        rem = i%10;
        sum = sum + rem*rem*rem;
        rem =0 ;
    }
    return sum ;
}
int main(){
    int n;
    cout << "enter a number" << endl;
    cin >> n;
    if(n == amstrong(n)){
        cout << "Amstrong number" ;
    }
    else{
        cout << " not amstrong number" ;
    }
    return 0;
}*/


/*
#include<iostream>
#include<cmath>
using namespace std;

int armstrong(int n){
    int temp = n;
    int digits = 0;

    // count digits
    while(temp > 0){
        digits++;
        temp /= 10;
    }

    temp = n;
    int sum = 0;
    // calculate sum
    while(temp > 0){
        int rem = temp % 10;
        sum += pow(rem, digits);
        temp /= 10;
    }
    return sum;
}
int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if(n == armstrong(n)){
        cout << "Armstrong number";
    }
    else{
        cout << "Not Armstrong number";
    }

    return 0;
}*/


//Write a function to print all perfect numbers in a given range.
/*#include<iostream>
using namespace std;
int per(int n){
    int sum =0;
    for(int i = 3; i<=n; i++){
        for(int j=1; j<i; j++){
            if(i % j == 0){
                sum = sum + j;
            }
        }
        if(sum == i){
            cout << i << endl;
        }
        sum = 0;
    }
}
int main () {
    int n;
    cout << "enter a number" ;
    cin >> n;
    per(n);
    return 0;
}*/


//Write a function that returns the binary equivalent of a number (without built-in functions).
/*#include <iostream>
using namespace std;

int decimalToBinary(int n) {
    int binary = 0;
    int place = 1;

    while (n > 0) {
        int remainder = n % 2;
        binary = binary + (remainder * place);
        place = place * 10;
        n = n / 2;
    }

    return binary;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Binary equivalent: " << decimalToBinary(num);
    return 0;
}*/



//Write a function to swap two numbers using call by reference.
/*#include <iostream>
using namespace std;

void swapNumbers(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;

    swapNumbers(x, y);

    cout << "After swapping: " << x << " " << y;
    return 0;
}*/




//Write a function that takes an integer and returns the sum of factorials of its digits.
/*#include<iostream>
using namespace std ;
int factt(int num){
    int fact = 1;
    int sum = 0;
    for(int i = num; i>0 ;i = i/10){
        int rem = i % 10 ;
        for(int j = rem; j>1 ; j--){
            fact = fact*j;
        }
         sum = sum + fact;
         fact = 1;
    }
    return sum;
    //cout << sum;
}
int main(){
    int num ;
    cout << "enter a number" ;
    cin >> num;
    
    cout << factt(num);
    return 0;
}*/


// Write a function that takes a number and returns the largest digit in it.
/*#include <iostream>
using namespace std;

int largestDigit(int num) {
    int maxDigit = 0;

    while (num > 0) {
        int digit = num % 10;

        if (digit > maxDigit) {
            maxDigit = digit;
        }

        num = num / 10;
    }

    return maxDigit;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Largest digit: " << largestDigit(num);
    return 0;
}*/