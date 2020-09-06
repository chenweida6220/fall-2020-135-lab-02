/*
Author: Wei Da Chen
Course: CSCI 135 REC
Instructor: Mike Zamansky
Assignment: Task C

Write a program edit-array.cpp that creates an array of 10 integers, and provides
the user with an interface to edit any of its elements. Specifically, it should
work as follows:

1.) Create an array myData of 10 integers.
2.) Fill all its cells with value 1 (using a for loop).
3.) Print all elements of the array on the screen.
4.) Ask the user to input the cell index i, and its new value v.
5.) If the index i is within the array range (0 ≤ i < 10), update the asked cell,
myData[i] = v, and go back to the step 3. Otherwise, if index i is out of range,
the program exits.
*/

#include <iostream>
using namespace std;

int main() {
  int myData[10];

  for (int i = 0; i < sizeof(myData) / sizeof(myData[0]); i++) {
    myData[i] = 1;
  }

  // Prints myData array
  for (int j = 0; j < sizeof(myData) / sizeof(myData[0]); j++) {
    cout << myData[j] << " ";
  }

  while (true) {
  cout << endl << endl;

  int cellIndex = 0;
  cout << "Input cell index: ";
  cin >> cellIndex;

  int newIndex = 0;
  cout << "New index: ";
  cin >> newIndex;

  cout << endl;

  if (cellIndex >= 0 && cellIndex < 10) {
    myData[cellIndex] = newIndex;
    // Prints myData array
    for (int j = 0; j < sizeof(myData) / sizeof(myData[0]); j++) {
      cout << myData[j] << " ";
    }
  }
  else {
    cout << "Index out of range. Exit.";
    exit(EXIT_SUCCESS);
  }
}
}
