#include <iostream>
#include <cassert>
#include <vector>

using std::vector;

long long int binary_search(vector<long long int> a, long long int x, long long int left, long long int right) {

  while (left<=right){
    long long int middle = left + (right-left)/2;

    if(a[middle]==x)
      return middle;

    if(a[middle]<x)
      left = middle + 1;

    else
      right = middle - 1;
  }
  return -1;
}

int main() {
  long long int n;
  std::cin >> n;
  vector<long long int> a(n);
  for (size_t i = 0; i < a.size(); i++) {
    std::cin >> a[i];
  }
  long long int m;
  std::cin >> m;
  vector<long long int> b(m);
  for (long long int i = 0; i < m; ++i) {
    std::cin >> b[i];
  }
  if(m&&n==0)
    std::cout<<-1;

  for (long long int i = 0; i < m; ++i) {
    std::cout << binary_search(a, b[i], 0, a.size()) << ' ';
  }
  std::cout<<std::endl;
}
