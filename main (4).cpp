#include "func.hpp"
#include <iostream>

int main(){
    int n;
    int mas[N][N];
    Read(mas, n);
    if(SameColumn(mas,n) && IsPrime(mas,n))
        Sort(mas,n);
    Write(mas,n);
    return 0;
}