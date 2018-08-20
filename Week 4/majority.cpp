#include <algorithm>
#include <iostream>
#include <vector>

using std::vector;

long long int findCandidate(vector<long long int> &a, long long int size) {
  long long int maj_index = 0, count = 1;

  for(long long int i=0; i<size;i++)
  {
    if(a[maj_index]==a[i])
      count++;
    else
      count--;
    if(count==0){
      maj_index = i;
      count = 1;
    }
  }
  return a[maj_index];
}


int get_majority_element(vector<long long int> &a,long long int left, long long int size, long long int cand) {
  if (left == size) return -1;
  if (left + 1 == size) return a[left];
  long long int count = 0;
  for(long long int i=0;i<size;i++) 
    if (a[i]==cand)
      count++;
  
  if(count>(size/2)) 
    return 1;
  else
    return 0;
}

int main() {
  long long int n;
  std::cin >> n;
  vector<long long int> a(n);
  for (size_t i = 0; i < a.size(); ++i) {
    std::cin >> a[i];
  }
  long long int cand = findCandidate(a, a.size());
  std::cout << (get_majority_element(a, 0, a.size(), cand)) << '\n';
}
