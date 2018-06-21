#include <iostream>

int get_change(int m) {
    int n=0;
    while(m>0){
        while(m-10>=0){
            n++;
            m=m-10;
        }
        while(m-5>=0){
            n++;
            m=m-5;
        }
        while(m-1>=0){
            n++;
            m--;
        }    
    }
    return n;
}

int main() {
    int m;
    std::cin >> m;
    std::cout << get_change(m) << '\n';
}
