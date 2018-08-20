#include <iostream>
#include <vector>
#include <cstdlib>

using std::vector;
using std::swap;

void partition(vector<long long int> &a, long long int l, long long int r, long long int &i, long long int &j)
{
    i = l-1, j = r;
    long long int p = l-1, q = r;
    long long int v = a[r];
 
    while (true)
    {
        while (a[++i] < v);
 
        while (v < a[--j])
            if (j == l)
                break;
 
        if (i >= j) break;
 
        swap(a[i], a[j]);
 
        if (a[i] == v)
        {
            p++;
            swap(a[p], a[i]);
        }
 
        if (a[j] == v)
        {
            q--;
            swap(a[j], a[q]);
        }
    }
 
    swap(a[i], a[r]);
 
    j = i-1;
    for (long long int k = l; k < p; k++, j--)
        swap(a[k], a[j]);
 
    i = i+1;
    for (long long int k = r-1; k > q; k--, i++)
        swap(a[i], a[k]);
}

void quick_sort(vector<long long int> &a, long long int l, long long int r)
{
    if (r <= l) return;
 
    long long int i, j;
 
    partition(a, l, r, i, j);
 
    quick_sort(a, l, j);
    quick_sort(a, i, r);
}

int main() {
  long long int n;
  std::cin >> n;
  vector<long long int> a(n);
  for (size_t i = 0; i < a.size(); ++i) {
    std::cin >> a[i];
  }
  quick_sort(a, 0, a.size() - 1);
  for (size_t i = 0; i < a.size(); ++i) {
    std::cout << a[i] << ' ';
  }
}
