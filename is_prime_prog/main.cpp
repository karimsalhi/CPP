#include <iostream>
#include <string>
using namespace std;


int is_prime(int n) 
{
  bool is_prime = true;

  // 0 and 1 are not prime numbers
  if (n == 0 || n == 1) {
    cout << n << " is a prime: False\n";
    return 0;
  }

  // loop to check if n is prime
  for (int i = 2; i <= n/2; ++i) {
    if (n % i == 0) {
      is_prime = false;
      break;
    }
  }

  if (is_prime)
    cout << n << " is a prime: True\n";
  else
    cout << n << " is a prime: False\n";

  return 0;
}

int main(int argc, char *argv[])
{
    int i;
    while (cin >> i) {
        is_prime(i);
    }
    return 0;
}



