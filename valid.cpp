/*
Author: Wei Da Chen
Course: CSCI 135 REC
Instructor: Mike Zamansky
Assignment: Task A

Write a program valid.cpp, which asks the user to input an integer in the range
0 < n < 100. If the number is out of range, the program should keep asking to
re-enter until a valid number is input.

After a valid value is obtained, print this number n squared.
*/

#include <iostream>
using namespace std;

int main() {
  int integer = 0;
  cout << "Please enter an integer: ";
  cin >> integer;

  while (integer <= 0 || integer >= 100) {
    cout << "Please re-enter: ";
    cin >> integer;
  }

  cout << endl << endl;
  cout << "Number squared is " << integer * integer;
}
