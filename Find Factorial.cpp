#include<iostream>
using namespace std;
int factorial(int);
int main() 
{
    int a = 0, result = 0; //initializing variables
    cout <<"----------------" <<endl;
    cout<< "Enter any number to get factorial"<<endl;
    cin >> a; //get value
    result = factorial(a);
    cout << "The result for factorial of the number : " << a << " = " << result;
    return 0;
}

int factorial(int n) 

{
   
    if (n > 1)
	 {
        return n + factorial(n - 1); //formula
    }
	else
	{
        return 1;
    }
}
