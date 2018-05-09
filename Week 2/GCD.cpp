#include <iostream>

int gcd_naive(long a, long b) {
  long int r, d;
  while (b != 0)
  {
    r = a % b;
    a=b;
    b=r;
  }
  return a;
}

int main() {
  int a, b;
  std::cin >> a >> b;
  std::cout << gcd_naive(a, b) << std::endl;
  return 0;
}
