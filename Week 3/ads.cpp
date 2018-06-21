#include <iostream>
#include <vector>

using namespace std;
using std::vector;

long long int getRevenue(int n, vector<long double> first, vector<long double>second);

int main()
{
    int n;
    long long int value;
    cin>>n;
    vector<long double> first(n);
    vector<long double> second(n);
    for(int i=0;i<n;i++)
        cin>>first[i];
    for(int i=0;i<n;i++)
        cin>>second[i];

    value = getRevenue(n, first, second);
    cout<<value<<endl;
    return 0;
}

long long int getRevenue(int n, vector<long double> first, vector<long double>second)
{
    long double a=0, b=0;
    long long int value = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i; j++){
            if(first[j]<= first[j+1]){
                a= first[j];
                first[j]= first[j+1];
                first[j+1]= a;
            }
            if(second[j]<= second[j+1]){
                b = second[j];
                second[j]= second[j+1];
                second[j+1]= b;
            }
        }
    }

    for(int i=0;i<n;i++)
        value = value + first[i]*second[i];

    return value;
}