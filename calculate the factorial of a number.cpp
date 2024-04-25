#include <bits/stdc++.h>
using namespace std;

#define MAX_SIZE 10000000000000005


int fibo(int number);
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

 
void SieveOfEratosthenes(vector<int>& primes)
{
    bool IsPrime[MAX_SIZE];
    memset(IsPrime, true, sizeof(IsPrime));
 
    for (int p = 2; p * p < MAX_SIZE; p++) {
        if (IsPrime[p] == true) {
            for (int i = p * p; i < MAX_SIZE; i += p)
                IsPrime[i] = false;
        }
    }
    for (int p = 2; p < MAX_SIZE; p++)
        if (IsPrime[p])
            primes.push_back(p);
}

int main()
{
    int number = 5;
    int result=factorial(number);
    cout << "Factorial of "<< number << " is: " << result << endl;
    int fibonacciResult=fibo(number);
    int fibonacciResult2=fibo(number*number);
    cout<< "Fibonacci  of "<<number<<" is: "<< fibonacciResult<<endl;


    cout<< "Fibonacci  of "<<number*number<<" is: "<< fibonacciResult2<<endl;
    cout<< "Fibonacci  of "<<number*number<<" is: "<< fibonacciResult2*fibonacciResult2<<endl;    

    int fibonacciResult2=fibo(number);
    cout<< "Fibonacci  of "<<number<<" is: "<< fibonacciResult2<<endl;
    cout<< "Fibonacci  of "<<number*number<<" is: "<< fibonacciResult2*fibonacciResult2<<endl;
    int ans=1;
    for(int i=1;i<=n;i++)
    {
        ans*=i;
    }
    cout<<"Iterative factorial Answer : "<<ans<<endl;

    vector<int> primes;
    SieveOfEratosthenes(primes);
    cout << "5th prime number is " << primes[4] << endl;

    return 0;
}