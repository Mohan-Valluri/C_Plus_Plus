// GCD,LCM problem



//Read an integer n and print the n-th Fibonacci number using loops (no recursion).
/*#include <iostream>
using namespace std;

int main() {
    cout << "enter a series number" ;
    int a;
    cin >> a ;
    int sec_num = 1;  
    int first_num = 0; 
    int series = 0;
    cout << first_num << " " << sec_num <<" " ;
    for(int i=0 ; i<a-1 ; i++){
        series = sec_num + first_num ;
        first_num = sec_num ;
        sec_num = series ;
        cout << series << " " ;
    }
    return 0;
}
*/


//Read an integer and check whether it is a strong number  (sum of factorials of digits equals the number).
/*#include <iostream>
using namespace std;

int main() {
    cout << "enter a number" ;
    int num;
    cin >> num ;
    int num2 = num ;
    int rem = 0;  
    int sum = 0; 
    int fact = 1;
    for(int i = num; i>0; i=i/10 ) {
        rem = i % 10 ;
        for(int j = rem; j>0 ; j--){
             fact = fact*j;
            num = num2 ;
        }
        sum = sum + fact ;
        fact = 1;
    }
    cout << sum ;
    if(num2 == sum){
        cout << "strong number" << endl ;
    }
    else{
        cout << " not strong number" ;
    }
    return 0;
}*/


//Read a number and check whether it is a perfect number.
/*#include <iostream>
using namespace std;

int main() {
    cout << "enter a number" ;
    int num;
    cin >> num ;
    int num2 = num ;
    int sum = 0; 
    for(int i = 1; i<num; i++ ) {
        if(num%i == 0){
            sum = sum + i;
        }
    }
    cout << sum ;
    if(sum == num){
        cout << "Perfect number" ;
    }
    else{
        cout << "non perfect number" ;
    }
    return 0;
}*/


//Read an integer n and print all prime numbers up to n.
/*#include <iostream>
using namespace std;

int main() {
    cout << "enter a number" ;
    int num;
    cin >> num ;
    int count = 0;
    for(int i = 2; i<num; i++ ) {
        for(int j=2 ; j<i; j++){
            if( i%j == 0){
                count++;
            }
        }
        if(count == 0){
            cout << i << endl;
           
        }
         count = 0;
     }
      return 0;
}*/

//Read a number and check whether it is an Armstrong number for any number of digits.
/*#include <iostream>
using namespace std;

int main() {
    cout << "enter a number" ;
    int num;
    cin >> num ;
    int sum = 0;
    int num2 = num;
    int rem = 0;
    for(int i = num; i>0; i = i/10 ) {
         rem = i % 10;
         sum = sum + (rem*rem*rem);
         rem = 0;
     }
     if(sum == num2){
        cout << "Armstrong number" << endl;
     }
     else{
        cout << "non Armstrong number" ;
     }
      return 0;
}    */
   


//Read an integer and reverse the number, then check if it is a palindrome.

/*#include <iostream>
using namespace std;

int main() {
    cout << "enter a number" ;
    int num;
    cin >> num ;
    int sum = 0;
    int num2 = num;
    int rem = 0;
    for(int i = num; i>0; i = i/10 ) {
         rem = i % 10;
         sum = sum*10 + rem ;
         rem = 0;
     }
     if(sum == num2){
        cout << "palindrome" << endl;
     }
     else{
        cout << "non palindrome number" ;
     }
      return 0;
}*/


//Read two integers a and b and find their GCD and LCM using loops.
/*#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int gcd = 1;

    // Find GCD
    for (int i = 1; i <= a && i <= b; i++) {
        if (a % i == 0 && b % i == 0) {
            gcd = i;
        }
    }

    // Find LCM using formula
    int lcm = (a * b) / gcd;

    cout << "GCD = " << gcd << endl;
    cout << "LCM = " << lcm;

    return 0;
}
*/


//Read an integer and count the frequency of each digit in the number. explain this question
/*#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;

    int freq[10] = {0}; // store frequency of digits

    while (num > 0) {
        int digit = num % 10;
        freq[digit]++;
        num = num / 10;
    }

    // Print frequency
    for (int i = 0; i < 10; i++) {
        if (freq[i] > 0) {
            cout << i << " occurs " << freq[i] << " times" << endl;
        }
    }

    return 0;
}*/




//Read an integer n and print all numbers between 1 and n that are both prime and palindrome.
/*#include <iostream>
using namespace std;

int main() {
    cout << "enter a number" ;
    int num;
    cin >> num ;
    int sum = 0;
    int rem = 0;
    for(int i = 2; i<num; i++ ) {
        int count = 0;
        for(int j=2 ; j<i; j++){
            if( i%j == 0){
                count++;
            }
        }
        if(count == 0){
            for(int k = i; k>0; k = k/10 ) {
                  rem = k % 10;

                 sum = sum*10 + rem ;
                 rem = 0;
            }
        }
    if(sum == i){
        cout << "palindrome and prime number" << endl;
     }
     else{
        cout << "non palindrome number but prime number" ;
     }
           
        }
         count = 0;
         return 0;
     }*/
      

/*#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;

    for (int i = 2; i <= num; i++) {

        // Check prime
        int count = 0;
        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                count++;
                break;
            }
        }

        if (count == 0) {

            // Check palindrome
            int temp = i;
            int rev = 0;

            while (temp > 0) {
                int rem = temp % 10;
                rev = rev * 10 + rem;
                temp = temp / 10;
            }

            if (rev == i) {
                cout << i << " ";
            }
        }
    }

    return 0;
}*/




//Read an integer and convert it to binary representation using loops (no built-in functions).
/*#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;
    int binery = 0;
    char a ;

    for (int i = num; i > 0; i = i/2) {
        if(i%2 == 0){
            cha
        }
    }
}
*/


/*#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;

    int binary = 0;
    int place = 1;

    while (num > 0) {
        int rem = num % 2;
        binary = binary + rem * place;
        place = place * 10;
        num = num / 2;
    }

    cout << "Binary = " << binary;

    return 0;
}
*/



//Read a number and find the sum of all even digits and odd digits separately.


#include <iostream>
using namespace std;
int main () {
    cout << "enter a number" << endl;
    int num;
    cin >> num;
    int even = 0,odd = 0;
    for(int i = num; i > 0; i = i /10){
        int rem = 0;
        rem = i % 10;
        if(rem%2 == 0){
            even = even + rem;
        }
        else{
            odd = odd + rem ;
        }
    }
    cout << "the even sum = " << even << endl;
    cout << "the odd sum = " << odd << endl;
}