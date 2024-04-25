#include <bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}

int main()
{
    int number = 5;
    int result=factorial(number);
    cout << "Factorial of "<< num << " is: " << result << endl;
    return 0;
}