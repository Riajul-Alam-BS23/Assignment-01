#include <bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}
int fibo(int number) {
    if (number <= 1) {
        return number;
    }
    return fibo(number - 1) + fibo(number - 2);
}
int main()
{
    int number = 5;
    int result=factorial(number);
    cout << "Factorial of "<< number << " is: " << result << endl;
    int fibonacciResult=fibo(number);
    cout<< "Fibonacci  of "<<number<<" is: "<< fibonacciResult<<endl;
    int fibonacciResult2=fibo(number);
    cout<< "Fibonacci  of "<<number<<" is: "<< fibonacciResult2<<endl;
    return 0;
}