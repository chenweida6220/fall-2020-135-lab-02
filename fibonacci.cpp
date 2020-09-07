/*
Author: Wei Da Chen
Course: CSCI 135 REC
Instructor: Mike Zamansky
Assignment: Task D

Write a program fibonacci.cpp, which uses an array of ints to compute and print
all Fibonacci numbers from F(0) to F(59).
*/

#include <iostream>
using namespace std;

int main() {
  int fib[60];
  fib[0] = 0;
  fib[1] = 1;

  for (int i = 2; i < sizeof(fib) / sizeof(fib[0]); i++) {
    fib[i] = fib[i-1] + fib[i-2];
  }

  for (int j = 0; j < sizeof(fib) / sizeof(fib[0]); j++) {
    cout << fib[j] << endl;
  }
}
