/*
Author: Wei Da Chen
Course: CSCI 135 REC
Instructor: Mike Zamansky
Assignment: Task B MODIFIED

Write a program print-interval.cpp that asks the user to input two integers L
and U (representing the lower and upper limits of the interval), and print out
all integers in the range L ≤ i < U separated by spaces. Notice that we include
the lower limit, but exclude the upper limit.
*/
#include <iostream>
#include "funcs.h"
using namespace std;

void print_interval(int L, int U) {
  for (int x = L; x < U; x++) {
    cout << x << " ";
  }
}
