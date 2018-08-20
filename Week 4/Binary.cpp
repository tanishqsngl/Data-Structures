#include <iostream>
#include <cassert>
#include <vector>

using std::vector;

long long int binarySearch(vector<long long int> &a, long long int l, long long int r, long long int x)
{
    while (l <= r)
    {
        long long int m = l + (r-l)/2;

        if (a[m] == x)
            return m;
 
        if (a[m] < x)
            l = m + 1;
 
        else
            r = m - 1;
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

  for (long long int i = 0; i < m; ++i) {
    std::cout << binarySearch(a, 0, a.size(), b[i]) << ' ';
  }
  std::cout<<std::endl;
}
