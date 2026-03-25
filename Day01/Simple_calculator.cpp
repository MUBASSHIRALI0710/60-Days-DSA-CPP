#include <iostream>
using namespace std;
int main() {
char op ;
double num1, num2, result ;

cout << "Simple Calculator for Addition, subtarction, Multiplication, Division "<< endl ;

cout << "Enter First Number: " ;
cin >> num1;

cout << "Enter Opretor (+ , - , * , /): " ;
cin >> op;

cout << "Enter Second Number: " ;
cin >> num2;
switch (op) {

case '+':
  result = num1 + num2 ;
  cout << "Result: " << result << '\n' ;
  break;

  case '-':
  result = num1 - num2 ;
  cout << "Result: " << result << '\n' ;
  break;

  case '*':
  result = num1 * num2 ;
  cout << "Result: " << result << '\n' ;
  break;

  case '/':
  result = num1 / num2 ;
  cout << "Result: " << result << '\n' ;
  break;

default:
  cout << "That wasn't a vaild response !!";
  break;
}
  return 0;
}