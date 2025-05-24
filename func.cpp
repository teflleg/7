#include <iostream>
#include "func.hpp"
#include <math.h>

void Read(int mas[N][N],int& n){
    std::cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            std::cin>>mas[i][j];
        }   
    }
    return;
}
bool SameColumn(int mas[N][N],int n){
        for (int j1 = 0; j1 < n - 1; j1++) { 
            for (int j2 = j1 + 1; j2 < n; j2++) { 
                bool equal = true; 
                for (int i = 0; i < n; i++) { 
                    if (mas[i][j1] != mas[i][j2]) {
                        equal = false; 
                        break;
                    }
                }
                if (equal) {
                    return true; 
                }
            }
        }
        return false;
}
bool IsPrime(int mas[N][N],int n){ 
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(mas[i][j]==1) continue;
            int absm=sqrt(abs(mas[i][j]));
            int d=2;
            bool prime=true;
            while(d<=absm){
                if(abs(mas[i][j])%d==0){
                    prime=false;
                    break;
                }
                d++;
            }
            if(prime) return true;
        }
    }
    return false;
}
void Sort(int mas[N][N],int n){
    int sumEl[N]={0};
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            sumEl[i]+=abs(mas[i][j]);
        }   
    }
    for(int i=0;i<n-1;i++){
        int ii=i+1;
        while(ii<n){
            if(sumEl[i]>sumEl[ii]){
                for(int j=0;j<n;j++){
                        int tmp=mas[i][j];
                        mas[i][j]=mas[ii][j];
                        mas[ii][j]=tmp;
                        int tmpSum=sumEl[i];
                        sumEl[i]=sumEl[ii];
                        sumEl[ii]=tmpSum;
                }
            }    
            ii++;
        }
          
    }
    return;
}
void Write(int mas[N][N],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
           std::cout<<mas[i][j]<<" ";
        }   
        std::cout<<std::endl;
    }
    return;
}