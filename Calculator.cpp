#include <iostream>
#include "Calculator.h"

int Calculator::calculate(int a, int b, char operation)
{
  switch (operation)
  {
  case '+':
    return a + b;
  case '-':
    return a - b;
  case '*':
    return a * b;
  case '/':
    if (b != 0)
      return a / b;
  default:
    std::cin >> a >> operation >> b;
    return calculate(a, b, operation);
  }
}
