#include <iostream>

int gcd(long a, long b) {
  long int r, d;
  while (b != 0)
  {
    r = a % b;
    a=b;
    b=r;
  }
  return a;
}

int main()
{
    long long int a,b;
    std::cin>>a>>b;
    unsigned long long int r = a*b;
    std::cout<<r/gcd(a,b)<<std::endl;
    return 0;
}