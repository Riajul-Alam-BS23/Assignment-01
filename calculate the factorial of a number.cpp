#include <bits/stdc++.h>
using namespace std;

int factorial(unsigned int n)
{
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}

int main()
{
    int number = 5;
    cout << "Factorial of "<< num << " is: " << factorial(number) << endl;
    return 0;
}