


//Read an integer and check whether it is positive or negative.
/*#include <iostream>
using namespace std;

int main() {
    cout << "enter a number " << endl ;
    int x;
    cin >> x;
    if(x >= 0){
            cout << "positive number " ;
    }
    else{
         cout << "Negative numberr" ;
    }
   
    return 0;

}*/



//Read a number and check whether it is even or odd.
/*#include <iostream>
using namespace std;

int main() {
    cout << "enter a number " << endl ;
    int x;
    cin >> x;
    if(x % 2 == 0){
            cout << "even number " ;
    }
    else{
         cout << "odd number" ;
    }
   
    return 0;
}*/


//Read a character and check whether it is a vowel or consonant.
/*#include <iostream>
using namespace std;

int main() {
    cout << "enter a charecter " << endl ;
    char x;
    cin >> x;
    if(x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u'){
            cout << "owels " ;
    }
    else{
         cout << "consonent" ;
    }
   
    return 0;
}*/


//Read two integers and print the greater number.
/*#include <iostream>
using namespace std;

int main() {
    cout << "enter two number " << endl ;
    int x , y;
    cin >> x >> y;
    if(x > y){
            cout << x <<" is greater number" ;
    }
    else{
         cout << y <<" is greater number" ;
    }
   
    return 0;
}*/



//Read a number and check whether it is divisible by 5.
/*#include <iostream>
using namespace std;
int main() {
    cout << "enter a number " << endl ;
    int x;
    cin >> x;
    if(x % 5 == 0){
            cout << x << " is divisible by 5 " ;
    }
    else{
          cout << x << " is not divisible by 5 " ;
    }
   
    return 0;
}*/



//Read three integers and print the largest among them.
/*#include <iostream>
using namespace std;

int main() {
    cout << "enter three number " << endl ;
    int x , y ,z;
    cin >> x >> y >> z;
    if((x > y) && (x > z) ){
            cout << x <<" is greater number" ;
    }
    else if((z > y) && (z > x) ){
            cout << z <<" is greater number" ;
    }
    else{
         cout << y <<" is greater number" ;
    }
   
    return 0;
}*/


//Read a year and check whether it is a leap year.
/*#include <iostream>
using namespace std;
int main() {
    cout << "enter a year " << endl ;
    int x;
    cin >> x;
    if(x % 4 == 0){
        if(x % 400 == 0){
            cout << x << " is leap year " ;
        }
        else{
            cout << x << " is not leap year" ;
        }
      }
    else{
          cout << x << " is not leap year " ;
    }
   
    return 0;
}*/


//Read a character and check whether it is an uppercase or lowercase alphabet.
/*#include <iostream>
using namespace std;

int main() {
    cout << "enter a charecter " << endl ;
    char x;
    cin >> x;
    int y = (int)x ;
    if( (y>=65) && (y<=90) ){
            cout << "upper case" ;
    }
   else if( (y>=97) && (y<=112) ){
            cout << "lower case" ;
    }
    else{
        cout << "other symbols" ;
    }
   
    return 0;
}*/


//Read marks of a student and print the grade based on given conditions.
/*#include <iostream>
using namespace std;

int main() {
    cout << "enter the marks " << endl ;
    int x;
    cin >> x;
    if( x <= 35 ){
            cout << "Fail" ;
    }
   else if( x<= 55 ){
            cout << "c grade" ;
    }
    else if( x<= 80 ){
            cout << "b grade" ;
    }
    else if( x<= 100 ){
            cout << "a grade" ;
    }
    else{
        cout << "out of range" ;
    }
   
    return 0;
}*/


//Read a number and check whether it is a 3-digit number.
/*#include <iostream>
using namespace std;

int main() {
    cout << "enter a number " << endl ;
    int x;
    cin >> x;
    if( (x <= 999) && (x >= 100) ){
            cout << "3 digit number" ;
    }
    else{
        cout << " not 3 digit number" ;
    }
   
    return 0;
}*/



//Read coefficients a, b, and c and determine the nature of roots of a quadratic equation.
/*#include <iostream>
using namespace std;

int main() {
    cout << "enter the 3 roots " << endl ;
    int a,b,c;
    cin >> a >> b >> c;
    if( ((b*b) - 4*a*c) == 0 ){
            cout << "the roots are equal" ;
    }
    else if(((b*b) - 4*a*c) > 0) {
        cout << " real roots" ;
    }
    else{
        cout << "Imaginary roots" ;
    }
   
    return 0;
}*/



//Read a number and check whether it is a palindrome.
/*#include <iostream>
using namespace std;

int main() {
    cout << "enter a number " << endl ;
    int x;
    cin >> x;
    int y = x;
    int z = 0;
    int rem = 0;
    for(int i = x; i>0 ; i = i/10){
        rem = i % 10 ;
         z = z*10 + rem ;
         rem = 0;
    }
    if( z == y){
            cout << "palindrome number" ;
    }
    else{
        cout << " not a palindrome number" ;
    }
   
    return 0;
}*/

//Read a person's age and income and determine whether they are eligible for a loan.
/*#include <iostream>
using namespace std;

int main() {
    int age;
    double income;

    cin >> age >> income;

    if (age >= 21 && income >= 25000) {
        cout << "Eligible for loan";
    } else {
        cout << "Not eligible for loan";
    }

    return 0;
}*/



//Read electricity units consumed and calculate the electricity bill based on slab rates.
/*#include <iostream>
using namespace std;

int main() {
    int units;
    double bill;

    cin >> units;

    if (units <= 100) {
        bill = units * 1;
    }
    else if (units <= 200) {
        bill = (100 * 1) + (units - 100) * 2;
    }
    else {
        bill = (100 * 1) + (100 * 2) + (units - 200) * 3;
    }

    cout << "Electricity Bill = " << bill;

    return 0;
}*/





//Read three sides of a triangle and check whether it is valid, and if valid, determine its type.
/*#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    // Check validity
    if (a + b > c && a + c > b && b + c > a) {
        cout << "Valid triangle" << endl;

        // Check type
        if (a == b && b == c) {
            cout << "Equilateral";
        }
        else if (a == b || b == c || a == c) {
            cout << "Isosceles";
        }
        else {
            cout << "Scalene";
        }
    }
    else {
        cout << "Invalid triangle";
    }

    return 0;
}*/
