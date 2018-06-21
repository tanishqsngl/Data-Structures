#include <iostream>
#include <vector>
#include<iomanip>

using std::vector;
double n;

double get_optimal_value(int capacity, vector<double> weights, vector<double>values){
    double value = 0;
    double a=0., b=0;
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(values[j]/weights[j]<= values[j+1]/weights[j+1]){
                a= values[j];
                b= weights[j];
                values[j]= values[j+1];
                weights[j]= weights[j+1];
                values[j+1]= a;
                weights[j+1]= b;
            }
        }
    }

    for(int i=0; i<n; i++){
        if(capacity==0)
            return value;
        int a=0;
        if(weights[i]<=capacity){
            a= weights[i];
        }
        else{
            a= capacity;
        }
        value = value + a*(values[i]/weights[i]);
        capacity = capacity - a;
    }
    return value;
}

int main(){
    double capacity;
    std::cin>> n >> capacity;
    vector<double> values(n);
    vector<double> weights(n);
    for(int i= n-1; i>= 0 ; i--)
        std::cin>>values[i]>>weights[i];
    double optimal = get_optimal_value(capacity, weights, values);
    std::cout<<std::setprecision(3)<<std::fixed<<optimal<<std::endl;
    return 0;
}