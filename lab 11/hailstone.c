#include<stdio.h>
void hailSeq(int n){
    printf("%d \tw",n);
    if(n==1){
        return;
    }
    else if(n%2==0){
        return hailSeq(n/2);
    }
    else if (n%2!=0){
        return hailSeq(n*3 +1);
    }
    }
int main(){
    int n;
    printf("Enter the number n\n");
    scanf("%d",&n);
    hailSeq(n);

}
    
