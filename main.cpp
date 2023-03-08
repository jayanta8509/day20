// Write a program to identify if the number is Prime number or not
#include <cmath>
#include <iostream>

using namespace std;

bool isPrime(int n) {
  if (n <= 1) {
    return false;
  }

  for (int i = 2; i <= sqrt(n); i++) {
    if (n % i == 0) {
      return false;
    }
  }

  return true;
}

int main() {
  int n;
  cout << "Enter a number: ";
  cin >> n;

  if (isPrime(n)) {
    cout << "prime number" << endl;
  } else {
    cout << "Not a prime number" << endl;
  }

  return 0;
}
