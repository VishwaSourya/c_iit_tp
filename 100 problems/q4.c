#include<stdio.h>
int  factorial(int n){
    int fac=1;
    if(n==0){
        return 1;
    }
    if(n>0){
        for(int i=1;i<=n;i++){
            fac*=n;
        }
        return fac;
    }
}
void ncr(int n,int r){
    int k;
    k=factorial(n)/(factorial(r)*factorial(n-r));
    printf("%d",k);
}
void pascal(int n){
    int i,j,k;
    k=2*n-1;
    for(i=0;i<n;i++){
        for(j=0;j<k;j++){
            if(j=0;j<k;j++){
                
            }
        }
    }
}