#include <bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}
int fibonacci(int number) {
    if (number <= 1) {
        return number;
    }
    return fibonacci(number - 1) + fibonacci(number - 2);
}
int main()
{
    int number = 5;
    int result=factorial(number);
    cout << "Factorial of "<< number << " is: " << result << endl;
    cout<< "Fibonacci  of "<<number<<" is: "<< fibonacci(number)<<endl;
    return 0;
}