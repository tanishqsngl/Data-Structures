#include <iostream>
#include <cassert>

int fibonacci_fast(int n)
{
    int number[99999999];
    number[0]=0;
    number[1]=1;
    for(int i=2;i<=n;i++)
    {
        number[i]=(number[i-1]+number[i-2]);
    }
    return number[n];
}

int main(void)
{
    int n=0;
    std::cin >> n;
    std::cout<<fibonacci_fast(n)<< '\n';
    return 0;
}