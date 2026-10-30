//write a function to print "helloworld"//
/*# include <iostream>
using namespace std;
void printsailaja()
{
	cout<<"helloworld";
}
int main()
{
	printsailaja();
	return 0;
}


//write a function that takes an integerr and returns its square//
#include <iostream>
using namespace std;
void square(int n) {
    cout << "Square="<< n * n;
}
int main() \
{
    int n;
    cout << "Enter an value: ";
    cin >> n;
    square(n);
    return 0;
}


// write a function to check whether the number in even or odd//
#include <iostream>
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
}


// write a function that takes two numbers & return the larger one//
#include <iostream>
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
    return 0;
}
//write a function to calculate the sum of two numbers//
#include <iostream>
using namespace std;
void sum(int a, int b) {
    cout << "Sum = " << a + b;
}
int main() {
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;
    sum(x, y);

    return 0;
}

// write a function to check whether a number is a prime number//
#include <iostream>
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
}
//write a function to find the factorial of the number//
#include <iostream>
using namespace std;
void factorial(int n) {
    long fact = 1;
    for (int i = 1; i <= n; i++)
        fact *= i;
    cout << "Factorial = " << fact;
}
int main() {
    int n;
    cin >> n;
    factorial(n);
    return 0;
}
//write a function to find the reverse  of a number//
#include <iostream>
using namespace std;

void revers(int n) {
    int rev = 0;
    while (n > 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    cout << "Reversed n= " << rev;
}

int main() {
    int num;
    cin >> num;
    revers(num);
    return 0;
}
//write a function to find the sum  of digits of a number//
#include <iostream>
using namespace std;

void sum(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;  
        n /= 10;        
    }
    cout << "Sum of digits = " << sum;
}

int main() {
    int num;
    cin >> num;
    sum(num);
    return 0;
}
// write a function that takes a number and returns that it is palindrom//
#include <iostream>
using namespace std;
void Palindrome(int n) {
    int o = n;
    int rev = 0;

    while (n > 0) {
        rev = rev * 10 + n % 10;  
        n /= 10;                  
    }

    if (o == rev)
        cout << "Palindrome";
    else
        cout << "Not a Palindrome";
}
int main() {
    int num;
    cin >> num;
    Palindrome(num);
    return 0;
}
// write a function that takes to returns n-th fiboncci number//
#include <iostream>
using namespace std;
void Fibonacci(int n) {
    if (n <= 0) {
        cout << "Invalid input";
        return;
    }

    if (n == 1) {
        cout << "Fibonacci number = 0";
        return;
    }

    if (n == 2) {
        cout << "Fibonacci number = 1";
        return;
    }

    int a = 1, b = 2, c;
    for (int i = 1; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }

    cout << "Fibonacci number = " << b;
}
int main() {
    int num;
    cin >> num;
    Fibonacci(num);
    return 0;
}

//write a function that return the count prime numbers up to n//
#include <iostream>
using namespace std;

void Armstrong(int n) {
    int original = n, sum = 0;
    int digits = 0;

    int temp = n;
    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    temp = n;
    while (temp > 0) {
        int digit = temp % 10;
        int x = 1;
        for (int i = 0; i < digits; i++)
            x *= digit;
        sum += x;
        temp /= 10;
    }

    if (sum == original)
        cout << n << " is an Armstrong number";
    else
        cout << n << " is not an Armstrong number";
}

int main() {
    int num;
    cin >> num;
    Armstrong(num);
    return 0;
}
//write a functionto print the all perfect numbers in a give range//
#include <iostream>
using namespace std;

void Numbers(int x, int y) {
    for (int num = x; num <= y; num++) {
        int sum = 0;
        for (int i = 1; i < num; i++) {
            if (num % i == 0)
                sum += i;
        }
        if (sum == num && num != 0)
            cout << num << " ";
    }
}
int main() {
    int a, b;
    cin >> a >> b;
    Numbers(a, b);
    return 0;
}
//Write a function that returns the binary equivalent of a number//
#include <iostream>
using namespace std;

void Binary(int n) {
    if (n == 0) {
        cout << "0";
        return;
    }

    string b = "";
    while (n > 0) {
        b = char((n % 2) + '0') + b;
        n /= 2;
    }
    cout << b;
}
int main() {
    int num;
    cin >> num;
    Binary(num);
    return 0;
}
//write a function to swap  two number by usingcall by refernce//
#include <iostream>
using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
    cout << "After swapping: a = " << a << ", b = " << b;
}

int main() {
    int x, y;
    cin >> x >> y;
    swap(x, y);
    return 0;
}*/

