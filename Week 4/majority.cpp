#include <algorithm>
#include <iostream>
#include <vector>
#include <cstdlib>

using std::vector;
using std::swap;

int partition(vector<int> a, int left, int right){
  int pivot = a[right];
  int i = left - 1;

  for(int j=left; j<=right-1; j++){
    if(a[j] <= pivot){
      i++;
      swap(a[j], a[i]);
    }
  }
  swap(a[i+1], a[right]);
  return i+1;
}

int quick_sort(vector<int> a, int left, int right) {
  int pi=0;
  if(left<right){
    pi = partition(a, left, right);

    quick_sort(a, left, pi-1);
    quick_sort(a, pi+1, right);
  }
return 0;
}

int get_majority_element(vector<int> a, int left, int right){
  quick_sort(a, left, right);
  int count=0;

  for(int i=0; i<right; i++){
    if(a[(right)/2]==a[i]){
      count++;
    }
  }
  if((right)/2<=count)
    return 1;
  else
    return 0;
}

int main() {
  int n;
  std::cin >> n;
  vector<int> a(n);
  for (size_t i = 0; i < a.size(); ++i) {
    std::cin >> a[i];
  }
  std::cout << (get_majority_element(a, 0, a.size()) != -1) << '\n';
}
