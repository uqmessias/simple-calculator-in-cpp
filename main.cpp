#include "Calculator.h"

using namespace std;

int main()
{
  cout << "Hello! I'm calculator" << endl;

  int a, b, result;
  char operation;
  cout << "Please enter num1 operation num2: " << endl;
  cin >> a >> operation >> b;
  Calculator calculator;
  result = calculator.calculate(a, b, operation);
  cout << "Result is: " << result << endl;
  
  cin.ignore();
  cin.get();
  return 0;
}
