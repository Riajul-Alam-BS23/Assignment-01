#include <bits/stdc++.h>
using namespace std;

<<<<<<< HEAD
int factorial(int n)
=======
int factorial(unsigned int n)
>>>>>>> 1fbe4a6d71858e4936b5cc207acc68d06180681b
{
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}

int main()
{
    int number = 5;
<<<<<<< HEAD
    int result=factorial(number);
    cout << "Factorial of "<< num << " is: " << result << endl;
=======
    cout << "Factorial of "<< num << " is: " << factorial(number) << endl;
>>>>>>> 1fbe4a6d71858e4936b5cc207acc68d06180681b
    return 0;
}