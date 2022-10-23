# include <iostream>
using namespace std;
double findMod(double num1,double num2)
  double findMod(double num1,double num2)
  {
    double mod;
    if(num1<0)
    mod=-num1;
    else
    mod=num1;
    if(num2<0)
    num2=-num2;
    while(mod>=num2)
    mod=mod-num2;
    if(num1<0)
    return -mod;
    return mod;
  }

int main() {

  char op;
  double num1, num2;

  cout << "Enter operator: +, -, *, /,%: ";
  cin >> op;

  cout << "Enter two operands: ";
  cin >> num1 >> num2;

  switch(op) {

    case '+':
      cout << num1 << " + " << num2 << " = " << num1 + num2;
      break;

    case '-':
      cout << num1 << " - " << num2 << " = " << num1 - num2;
      break;

    case '*':
      cout << num1 << " * " << num2 << " = " << num1 * num2;
      break;

    case '/':
      cout << num1 << " / " << num2 << " = " << num1 / num2;
      break;
      
     case '%':
      cout << num1 << " % " << num2 << " = " << findMod(num1,num2);
      break;

    default:
      // If the operator is other than +, -, * or /, error message is shown
      cout << "Error! operator is not correct";
      break;
  }

  return 0;
}

