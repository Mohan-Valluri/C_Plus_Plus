// 3,4



//1) Declare variables of type int, float, double, and char. Read values from the user and print them.
/*#include <iostream>
using namespace std;

int main() {
    int a;
    float b;
    double c;
    char d;

    cout << "Enter an integer: ";
    cin >> a;

    cout << "Enter a float: ";
    cin >> b;

    cout << "Enter a double: ";
    cin >> c;

    cout << "Enter a character: ";
    cin >> d;

    cout << "\nYou entered:" << endl;
    cout << "Integer = " << a << endl;
    cout << "Float = " << b << endl;
    cout << "Double = " << c << endl;
    cout << "Character = " << d << endl;

    return 0;
}*/

// 2) Read an integer and print its size in bytes using sizeof.
/*#include <iostream>
using namespace std;
int main() {
    int num;
    cin >> num;
    cout << "Size of integer = " << sizeof(num) << " bytes";
    return 0;
}
*/


// 3) Read a character and print whether it is a digit, alphabet, or special character.
/*#include <iostream>
using namespace std;

int main() {
    char ch;
    cin >> ch;

    if (ch >= '0' && ch <= '9') {
        cout << "Digit";
    }
    else if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        cout << "Alphabet";
    }
    else {
        cout << "Special Character";
    }

    return 0;
}*/

/*#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char ch;
    cin >> ch;

    if (isdigit(ch))
        cout << "Digit";
    else if (isalpha(ch))
        cout << "Alphabet";
    else
        cout << "Special Character";

    return 0;
}*/

/*#include <iostream>
using namespace std;

int main() {
    char ch;
    cin >> ch;

    if (ch >= 48 && ch <= 57) {
        cout << "Digit";
    }
    else if ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122)) {
        cout << "Alphabet";
    }
    else {
        cout << "Special Character";
    }

    return 0;
}*/



//  4)  Read a float value and store it in an int. Print both values.
/*#include <iostream>
using namespace std;

int main() {
    float num;
    cin >> num ;
    int num1 = int(num) ;    // rounds neareast integer
    cout << " the float number is " << num << endl ;
    cout << "the int num is " << num1 ;
    return 0;
}*/


// 5) Read two integers and print their sum using a long long variable.
/*#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    long long sum = (long long)a + b;

    cout << "Sum = " << sum;

    return 0;
}*/



//Read an integer and a double. Add them and store the result in a double. Print the result.
/*#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a ;
    double b,c;
    cin >> b;
    c = a + b;

    cout << "Sum = " << c;

    return 0;
}*/


//Read a long long number and print its last digit.
/*#include <iostream>
using namespace std;

int main() {
    long a,b;
    cin >> a ;
    b = a%10 ;
    cout << b ;
    return 0;
}*/


//Read a character and print its ASCII value using type casting.

/*#include<iostream>
using namespace std ;
int main () {
    char a ;
    cout << "enter a charecter" << endl ;
    cin >> a ;
    int ascii = (int)a;
    cout << "ascii value is " << ascii;
    return 0;
}*/

//or

/*#include<iostream>
using namespace std ;
int main () {
    char a ;
    cout << "enter a charecter" << endl ;
    cin >> a ;
    int ascii = int(a);
    cout << "ascii value is " << ascii;
    return 0;
}*/


//Read a double value and print it after converting it into a float.
/*#include<iostream>
using namespace std ;
int main () {
    double a ;
    cout << "enter a value" << endl ;
    cin >> a ;
    float b = float(a);
    cout << "float value is " << b;
    return 0;
}*/


//Read an integer and check whether it can be stored in a short data type.
/*#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;

    if (num >= -32768 && num <= 32767) {
        cout << "Can be stored in short";
    } else {
        cout << "Cannot be stored in short";
    }

    return 0;
}*/


/*#include <iostream>
#include <climits>
using namespace std;

int main() {
    double num;
    cin >> num;

    // Check if number is integer or decimal
    if (num != (int)num) {
        cout << "Entered value is a decimal number";
    }
    else {
        int value = (int)num;

        if (value >= SHRT_MIN && value <= SHRT_MAX) {
            cout << "Can be stored in short";
        } else {
            cout << "Cannot be stored in short";
        }
    }

    return 0;
}*/

//Read a very large integer and store it using an unsigned long long, then print it.
/*#include <iostream>
using namespace std;

int main() {
    unsigned long long num;
    cin >> num;

    cout << num;

    return 0;
}*/

//Read two variables of different data types (int and float) and swap their values using type casting.
/*#include <iostream>
using namespace std;
int main() {
    int a ;
    float b ;
    cin >> a ;
    cin >> b ;
    int c = a;
    a = float(b) ;
    b = int(c);
    cout << a <<endl ;
    cout << b << endl ;

    return 0;
}*/


//Read a value in bytes and convert it into KB, MB, and GB using appropriate data types.
/*#include <iostream>
using namespace std;
int main() {
    int byte ;
    cin >> byte;
    double kb = byte/1024.0 ;
    double mb = kb/1024.0 ;
    double gb = mb/1024.0 ;
    cout << "date in kb  " << kb <<endl ;
    cout << "date in mb  " << mb <<endl ;
    cout << "date in gb  " << gb <<endl ;

    return 0;
}*/



//Read an integer and print the result after incrementing it using pre-increment and post-increment, showing the difference.
/*#include <iostream>
using namespace std;
int main() {
    int num ;
    cin >> num;
     int num1 = num ;
    int num2 = num ;
    int pre = ++ num1 ;
    int post = num2 ++ ;
    cout << "the actuall number = " << num << endl ;
    cout << "the pre increment number = " << pre << endl ;
    cout << "the post increment number = " << post << endl ;
    return 0 ;
}*/


/*#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;

    int num1 = num;
    int num2 = num;

    int pre = ++num1;
    int post = num2++;

    cout << "Actual number = " << num << endl;
    cout << "Pre-increment value = " << pre << endl;
    cout << "Post-increment value (before increment) = " << post << endl;
    cout << "Value after post-increment = " << num2 << endl;

    return 0;
}*/


//Read a numeric character and convert it into its integer value without using library functions.
#include <iostream>
using namespace std;

int main() {
    char ch;
    cin >> ch;

    int num = ch - '0';

    cout << "Integer value = " << num;

    return 0;
}
