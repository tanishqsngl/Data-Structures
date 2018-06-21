#include <iostream>
#include <vector>

using namespace std;
using std::vector;

int getRevenue(int n, vector<int> first, vector<int>second);

int main()
{
    int n, value;
    cin>>n;
    vector<int> first(n);
    vector<int> second(n);
    for(int i=0;i<n;i++)
        cin>>first[i];
    for(int i=0;i<n;i++)
        cin>>second[i];

    value = getRevenue(n, first, second);
    cout<<value<<endl;
    return 0;
}

int getRevenue(int n, vector<int> first, vector<int>second)
{
    int a=0, b=0;
    int value = 0;
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(first[j]<= first[j+1]){
                a= first[j];
                first[j]= first[j+1];
                first[j+1]= a;
            }
            if(second[j]<=second[j+1]){
                b = second[j];
                second[j]= second[j+1];
                second[j+1]= b;
            }
        }
    }

    for(int i=0;i<n;i++)
    {
        value = value + first[i]*second[i];
    }
    return value;
}