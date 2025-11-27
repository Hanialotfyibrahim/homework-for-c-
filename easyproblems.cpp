
#include <iostream>
using namespace std;

// ---------------- Problem 1 ----------------
Adding Two Integers

Input: two integers a and b

Output: their sum
int main() {
    int a, b; cin >> a >> b;
    cout << a + b;
    return 0;
}


// ---------------- Problem 2 ----------------
Difference of Two Numbers

Question: Read two integers a and b and print a - b.
Input: Two integers separated by space
Output: A single integer — the difference
int main() {
    int a, b; cin >> a >> b;
    cout << a - b;
    return 0;
}

// ---------------- Problem 3 ----------------
Product of Two Numbers

Question: Read two integers a and b and print their product.
Input: Two integers separated by space
Output: A single integer — the product
int main() {
    int a, b; cin >> a >> b;
    cout << a * b;
    return 0;
}

// ---------------- Problem 4 ----------------
Division

Question: Read two numbers a and b and print a / b. 
If b is zero, print "Cannot divide by zero".
Input: Two numbers a and b
Output: Either a / b (as a decimal) or the message "Cannot divide by zero"
int main() {
    double a, b; cin >> a >> b;
    if (b != 0) cout << a / b;
    else cout << "Cannot divide by zero";
    return 0;
}

// ---------------- Problem 5 ----------------
Even or Odd

Question: Read an integer n and print "Even" if it is even, or "Odd" if it is odd.
Input: Integer n
Output: "Even" or "Odd"
int main() {
    int n; cin >> n;
    if (n % 2 == 0) cout << "Even";
    else cout << "Odd";
    return 0;
}

// ---------------- Problem 6 ----------------
Positive, Negative, or Zero

Question: Read an integer n and print whether it is "Positive", "Negative", or "Zero".
Input: Integer n
Output: One of "Positive", "Negative", "Zero"
int main() {
    int n; cin >> n;
    if (n > 0) cout << "Positive";
    else if (n < 0) cout << "Negative";
    else cout << "Zero";
    return 0;
}

// ---------------- Problem 7 ----------------
Maximum of Two Numbers

Question: Read two integers a and b and print the larger one.
Input: Two integers separated by space
Output: The maximum integer
int main() {
    int a, b; cin >> a >> b;
    cout << (a > b ? a : b);
    return 0;
}

// ---------------- Problem 8 ----------------
Minimum of Two Numbers

Question: Read two integers a and b and print the smaller one.
Input: Two integers separated by space
Output: The minimum integer
int main() {
    int a, b; cin >> a >> b;
    cout << (a < b ? a : b);
    return 0;
}

// ---------------- Problem 9 ----------------
Sum of First n Numbers

Question: Read an integer n and print the sum of all numbers from 1 to n.
Input: Integer n
Output: Single integer — the sum

int main() {
    int n; cin >> n;
    int sum = 0;
    for (int i = 1; i <= n; i++) sum += i;
    cout << sum;
    return 0;
}

// ---------------- Problem 10 ----------------
Factorial of n

Question: Read an integer n and print its factorial (n!).
Input: Integer n
Output: Single integer — the factorial


int main() {
    int n; cin >> n; // msln n=5
    long long fact = 1;
    for (int i = 1; i <= n; i++) fact *= i;
    cout << fact;
    return 0;
}

// ---------------- Problem 11 ----------------
Print Numbers 1 to n

Question: Read an integer n and print all numbers from 1 to n separated by spaces.
Input: Integer n
Output: Numbers from 1 to n separated by space
int main() {
    int n; cin >> n;
    for (int i = 1; i <= n; i++) cout << i << " ";
    return 0;
}

// ---------------- Problem 12 ----------------


Question: You are given an integer w — the weight of a watermelon. Determine if it is possible to divide it 
-into two parts such that each part has an even positive weight.

Input: An integer w (1 ≤ w ≤ 100)
Output: "YES" if possible, "NO" otherwise

#include <iostream>
using namespace std;

int main() {
    int w;
    cin >> w;
    if (w > 2 && w % 2 == 0) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
    return 0;
}





// ---------------- Problem 13 ----------------

Question: Given an integer n (n ≥ 2), count the number of pairs of positive integers (a, b) such that a + b = n.
Input: Integer n (2 ≤ n ≤ 100)
Output: Number of pairs.
#include <iostream>
using namespace std;

int main() {
    int n; //5
    cin >> n; 
    cout << n - 1 << "\n"; // 1+4=5⇒(1,4) 
    //2+3=5 ⇒2+3=5⇒(2,3)
//3+2=5⇒(3,2)
//4+1=5⇒(4,1)
    return 0;
}




// ---------------- Problem 14 ----------------

Next Even Number
Question: Given an integer n, print the next even number greater than n.
Input: Integer n (1 ≤ n ≤ 1000)
Output: Next even number after n.
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n % 2 == 0) {
        cout << n + 2 << "\n";
    } else {
        cout << n + 1 << "\n";
    }
    return 0;
}


// ---------------- Problem 15 ----------------
Sum of Digits

Question: Read an integer n and print the sum of its digits.

Input:

A single integer n (1 ≤ n ≤ 10^9)

Output:

A single integer — the sum of digits of n

int main() {
    int n; cin >> n; //123
    int sum = 0;
    while (n != 0) {
        sum += n % 10; //123%10 = 3 then 0+3=3 then 123/10= 12 then 12%10=2 so 2 +3=5 then 12/10=1 // again n%10=1 sum=5+1=6 so loop done

        n /= 10;
    }
    cout << sum;
    return 0;
}

// ---------------- Problem 16 ----------------
Average of n Numbers

Question: Read an integer n and then n floating-point numbers. Print their average.

Input:

First line: integer n (1 ≤ n ≤ 100)

Next n lines: floating-point numbers x_i

Output:

Average of all numbers
    double sum
    int main() {
    int n; cin>>n;
     int sum = 0;
    for (int i = 0; i < n; i++) { //2.5، 3.5، 4.
        double x; cin >> x;
        sum += x;
    }
    cout << sum / n;
    return 0;
}

// ---------------- Problem 17 ----------------
Maximum in Array

Question: Read an integer n and then n integers. Print the maximum number in the array.

Input:

First line: integer n (1 ≤ n ≤ 1000)

Second line: n integers separated by space

Output:

Maximum integer
int main() {
    int n; cin >> n;
    int arr[n]; for (int i = 0; i < n; i++) cin >> arr[i];
    int mx = arr[0];
    for (int i = 1; i < n; i++) if (arr[i] > mx) mx = arr[i];
    cout << mx;
    return 0;
}

// ---------------- Problem 18 ----------------
Minimum in Array

Question: Read an integer n and then n integers. Print the minimum number in the array.

Input:

First line: integer n

Second line: n integers

Output:

Minimum integer

int main() {
    int n; cin >> n;
    int arr[n]; for (int i = 0; i < n; i++) cin >> arr[i];
    int mn = arr[0];
    for (int i = 1; i < n; i++) if (arr[i] < mn) mn = arr[i];
    cout << mn;
    return 0;
}

// ---------------- Problem 19 ----------------
Count Even and Odd Numbers

Question: Read an integer n and then n integers. Count how many numbers are even and how many are odd.

Input:

First line: integer n

Second line: n integers

Output:

"Even: X Odd: Y" where X is the number of even integers and Y is the number of odd integers

int main() {
    int n; cin >> n;
    int arr[n], even = 0, odd = 0;
    for (int i = 0; i < n; i++) {  //msln n=5
        // arr[i] = 2 7 4 9 6

        cin >> arr[i];
        if (arr[i] % 2 == 0) even++; else odd++; 
    }
    cout << "Even: " << even << " Odd: " << odd;
    return 0;
}

// ---------------- Problem 20 ----------------
Multiplication Table

Question: Read an integer n and print its multiplication table from 1 to 10.

Input:

A single integer n

Output:

Ten lines in the format: "n x i = result"

Example: For n = 3

int main() {
    int n; cin >> n;
    for (int i = 1; i <= 10; i++) cout << n << " x " << i << " = " << n * i << "\n";
    return 0;
}

//3 x 1 = 3
//3 x 2 = 6
//3 x 3 = 9
...
