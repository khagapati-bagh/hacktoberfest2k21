/*
    Author : Nupur Goel
    Date : 10/10/2021
    Description : This is a program to find out whether a number is prime or not.
*/

#include <iostream>

using namespace std;
int main() {
  int n;
  bool flag = true;
  cout << "Enter any number: ";
  cin >> n;

  for (int i = 2; i <= n / 2; i++) {
    if (n % i == 0) {
      flag = false;
      break;
    }
  }
  if (flag == true) {
    cout << n << " is a prime number";
  } else {
    cout << n << " is not a prime number";
  }
  cout << "\n";
  return 0;
}
