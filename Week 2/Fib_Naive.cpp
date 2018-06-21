#include <iostream>
#include <cassert>

int fibonacci_naive(int n)
{
    if(n <= 1)
        return n;

    else
        return fibonacci_naive(n-1) + fibonacci_naive(n-2);    
}

int main(void)
{
    int n=0;
    std::cin >> n;
    std::cout<<fibonacci_naive(n)<< '\n';
    return 0;
}