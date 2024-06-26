#ifndef SIMPLECALC_H_INCLUDED
#define SIMPLECALC_H_INCLUDED

#include <iostream>
#include <iomanip>
using namespace std;

void simplecalc () {
  float num1, num2;
  char op;

  cout << "Please enter two numbers: ";
  cin >> num1>>num2;
  cout<<endl;

  cout << "Please enter an operator (+, -, *, /): ";
  cin >> op;
  cout<<endl;

  switch (op) {
  case '+':
    {
        cout << "The result is " << num1 + num2 << endl;
        break;
    }

  case '-':
    {
         cout << "The result is " << num1 - num2 << endl;
         break;
    }

  case '*':
    {
         cout << "The result is " << num1 * num2 << endl;
         break;
    }

  case '/':
    {
        if (num2 == 0)
      cout << "Unidentified" << endl;
    else {
      cout << "The result is " << fixed<<setprecision(2)<< num1 / num2<<endl;
    }
    break;
    }

  default:
    {
        cout << "Please enter a valid operator!" << endl;
        break;
    }
  }
  }



#endif // SIMPLECALC_H_INCLUDED
