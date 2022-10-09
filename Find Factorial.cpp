#include<iostream>
using namespace std;
int factorial(int);
int main() 
{
    int abc = 0, result = 0; //initializing variables
    cout <<"-------------------------" <<endl;
    cout<< "Enter any number to get factorial"<<endl;
    cin >> abc; //get value of the the number that is abc
    result = factorial(abc);
    cout << "The result for factorial of the number of abc would be : " << abc << " = " << result;
    return 0;
}

int factorial(int n) 
//formula
{ if (n > 1){ return n + factorial(n - 1);  }
	else {return 1;}
}
