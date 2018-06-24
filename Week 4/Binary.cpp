#include <iostream>
#include <cassert>
#include <vector>

using std::vector;

long double binary_search(vector<long double> a, long double x, long double left, long double right) {

  while(left<=right){
    int middle = left + (right-left)/2;

    if(a[middle]==x)
      return middle;

    else if(a[middle]<x)
      left = middle + 1;

    else
     right = middle-1;
  }
  return -1;
}

int main() {
  long double n;
  std::cin >> n;
  vector<long double> a(n);
  for (size_t i = 0; i < a.size(); i++) {
    std::cin >> a[i];
  }
  long double m;
  std::cin >> m;
  vector<long double> b(m);
  for (int i = 0; i < m; ++i) {
    std::cin >> b[i];
  }
  for (int i = 0; i < m; ++i) {
    std::cout << binary_search(a, b[i], 0, a.size()) << ' ';
  }
  std::cout<<std::endl;
}
