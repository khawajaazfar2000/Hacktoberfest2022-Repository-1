#include<iostream>
using namespace std;
int factorial(int);
int main() 
{
    int n = 0, result = 0; //initializing variables
    cout << "Enter a non-negative number to proceed : ";
    cin >> n; //get value
    result = factorial(n);
    cout << "The factorial of : " << n << " = " << result;
    return 0;
}

int factorial(int n) 
{
    if (n > 1) {
        return n + factorial(n - 1); //formula
    }
	else
	{
        return 1;
    }
}
