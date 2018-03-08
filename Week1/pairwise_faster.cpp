#include <iostream>
#include <vector>

using std::vector;
using std::cin;
using std::cout;
using std::max;

long long MaxPairWiseProductFast(const vector<long long>& numbers)
{
    long long index1=0;
    int n=numbers.size();
    for(int i=2; i<n; ++i)
    {
        if(numbers[i]>numbers[index1])
            index1=i;
    }
    long long index2=1;
    for(int i=2; i<n; ++i)
    {
        if(numbers[i]>numbers[index2])
            index2=i;
    }
    return numbers[index1]*numbers[index2];    
}

int main()
{
    int n;
    cin>>n;
    vector<long long> numbers(n);
    for(int i=0;i<n;++i)
        cin>>numbers[i];
    long long product = MaxPairWiseProductFast(numbers);
    cout<<product<< "\n";
    return 0;
}