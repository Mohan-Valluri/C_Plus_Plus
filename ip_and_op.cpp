/*
#include <iostream>
using namespace std;

int main() {
    cout << "Hello, World!" << endl;
    return 0;
}
*/



//Read an integer from the user and print it.
 
/*#include <iostream>
using namespace std;
int main() {
    int x, y;
    cout << "enter a number" << ;
    cin >> x;
    cout << "The value of x is " << x;
    return 0;
}*/



// Read two integers and print their sum
/*
#include <iostream>
using namespace std;
int main() {
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;
    int z = x + y;
    cout << "The sum is: " << z << endl;
    return 0;
}
*/


//Read a character and print its ASCII value.
/*
#include <iostream>
using namespace std;

int main() {
    char ch;
    cin >> ch;
    cout << int(ch);
    cout<<ch;
    return 0;
}
*/


//Read a float number and print it with exactly 2 decimal places.
/*
#include <iostream>
using namespace std;

int main() {
    double num;
    cin >> num;
    cout << fixed << setprecision(2) << num;
    return 0;
}
*/


//Read a string (single word) and print it in a new line.
/*#include <iostream>
using namespace std;
int main () {
    string name ;
    cin >> name ;
    cout << name <<endl;

}*/

//Read three integers and print the largest among them.
/*#include <iostream>
using namespace std;
int main () {
    int a,b,c ;
    cout << "enter 3 numbers" << endl;
    cin >> a >> b >> c ;
    if(a>b && a>c){
        cout << "the largest number is " << a ;
    }
    else if (b<a && b < c)
    {
          cout << "the largest number is " << b ;
    }
    else
    {
        cout << "the largest number is "  << c;
    }
    return 0;
}*/


//Read an integer n and print the square and cube of n in one line.

/*#include <iostream>
using namespace std;
int main () {
    int a ;
    cout << "enter a numbers" << endl;
    cin >> a ;
    cout << "the square is " << a*a << " the cube number is " << a*a*a ;
}*/


//Read a character and print whether it is a vowel or consonant.
/*
#include <iostream>
using namespace std;
int main () {
    char alpha;
    cout << "enter a char" << endl;
    cin >> alpha;
    if(alpha == 'a' && alpha == 'e' && alpha == 'i' && alpha == 'o' && alpha == 'u'){
        cout << "the given alphabet "<< alpha << " is owel " ;
    }
    else
    {
        cout << "the given alphabet " << alpha << " is consonent "  ;
    }
    return 0;
}
    */


//Read two integers a and b, swap their values, and print the result.
/*#include <iostream>
using namespace std;
int main () {
    int x,y;
    cout << "enter two numbers" << endl;
    cin >> x >> y;
    cout <<"the numbers befor swap x = " << x << " and y = "  << y << endl;
    x = x + y;
    y = x - y;
    x = x - y;
    cout <<"the numbers befor swap x = " << x << " and y = "  << y ;
}*/


//Read a full sentence count number of spaces
/*#include <iostream>
using namespace std;
int main () {
    string sentance;
    cout << "enter a sentance " << endl;
    getline(cin , sentance) ;
    int x ;
    x = sentance.length() ;
    cout << "the length of sentence is " << x << endl ;
    int count = 0;
    for(int i = 0; i< x ; i++){
        if(sentance[i] == ' '){
            count++ ;
        }
    }
    cout << "the number of spaces = " << count ;
    return 0;
}*/


//Read a full sentence (with spaces) and print each word on a new line.
/*#include <iostream>
using namespace std ;
int main () {
    string sent ;
    getline(cin , sent);
    int a = sent.length();
    string word = "";
    for(int i = 0; i<=a ; i++){
        if(sent[i] != ' '){
            word = word + sent[i];
        }
        else{
            cout << word << endl ;
            word.clear() ;
        }  
    }
    cout << word << endl ;
    return 0;
}*/


//Read an integer and print the number with commas as thousand separators  (Example: 1234567 → 1,234,567).
/*#include <iostream>
#include <string>
using namespace std;

int main() {
    long long num;
    cin >> num;
    string s = to_string(num);
    int n = s.length();
    for (int i = 0; i < n; i++) {
        cout << s[i];
        if ((n - i - 1) % 3 == 0 && i != n - 1) {
            cout << ",";
        }
    }
    return 0;
}*/



//Read a float number and print it in scientific notation.
/*#include <iostream>
using namespace std;

int main() {
    float num;
    cin >> num;

    cout << scientific << num;

    return 0;
}*/

//Read multiple integers until the user enters -1, then print the sum and count of entered numbers.
/*#include <iostream>
using namespace std;

int main() {
    int num ,count,sum;
    sum = 0;
    count = 0;
    for(int i = 0; i<2;){
        cout << "enter a number" ;
        cin >> num;
        if(num == -1){
            break;
        }
        else{
        sum = sum + num;
        count ++;
        }
    }
    cout <<"sum is " << sum << '\n' ;
    cout << "total numbers entered " << count;

    return 0;
}*/


/*Read a string and print it in the following format:
Original string
Uppercase
Lowercase
Reversed string*/

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string str;
    getline(cin, str);

    // Original
    cout << "Original: " << str << endl;

    // Uppercase
    string upper = str;
    for (int i = 0; i < upper.length(); i++) {
        upper[i] = toupper(upper[i]);
    }
    cout << "Uppercase: " << upper << endl;
    // Lowercase
    string lower = str;
    for (int i = 0; i < lower.length(); i++) {
        lower[i] = tolower(lower[i]);
    }
    cout << "Lowercase: " << lower << endl;
    // Reversed
    string rev = str;
    reverse(rev.begin(), rev.end());
    cout << "Reversed: " << rev << endl;
    return 0;
}
