#include <iostream>
#include <string>
using namespace std;


int is_prime(int n) 
{
  bool is_prime = true;

  if (n <= 1) {
    cout << n << " is a prime: False\n";
    return 0;
  }

  for (int i = 2; i <= n/2; ++i) {
    if (n % i == 0) {
        cout << n << " is a prime: False\n";
        return 0;
    }
  }

  cout << n << " is a prime: True\n";
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



