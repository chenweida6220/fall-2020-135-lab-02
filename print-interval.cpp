/*
Author: Wei Da Chen
Course: CSCI 135 REC
Instructor: Mike Zamansky
Assignment: Task B

Write a program print-interval.cpp that asks the user to input two integers L
and U (representing the lower and upper limits of the interval), and print out
all integers in the range L ≤ i < U separated by spaces. Notice that we include
the lower limit, but exclude the upper limit.

*/

#include <iostream>
using namespace std;

int main() {
  int Llimit = 0;
  cout << "Please enter L: ";
  cin >> Llimit;

  int Ulimit = 0;
  cout << "Please enter U: ";
  cin >> Ulimit;

  for (int x = Llimit; x < Ulimit; x++) {
    cout << x << " ";
  }
}
