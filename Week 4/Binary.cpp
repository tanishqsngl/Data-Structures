#include <iostream>
#include <cassert>
#include <vector>

using std::vector;

int binary_search(vector<int> a, int x, int left, int right) {
  int middle = left + (right-left)/2;

  if(right<=left)
    return -1;

  if(a[middle]==x)
    return middle;

  if(a[middle]<x)
    return binary_search(a, x, middle, right);

  return binary_search(a, x, left, middle);
}

int linear_search(vector<int> a, int x) {
  for (size_t i = 0; i < a.size(); ++i) {
    if (a[i] == x) return i;
  }
  return -1;
}

int main() {
  int n;
  std::cin >> n;
  vector<int> a(n);
  for (size_t i = 0; i < a.size(); i++) {
    std::cin >> a[i];
  }
  int m;
  std::cin >> m;
  vector<int> b(m);
  for (int i = 0; i < m; ++i) {
    std::cin >> b[i];
  }
  for (int i = 0; i < m; ++i) {
    //replace with the call to binary_search when implemented
    std::cout << binary_search(a, b[i], 0, a.size()) << ' ';
  }
  std::cout<<std::endl;
}
