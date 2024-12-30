#include<stdio.h>
int main() {
    int n;
    printf("Enter the number of elemenets in the array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("The sorted array in descendng order is:\t");
    int *i,*j,*ptr,big;
    for(i=arr;i<arr+n;i++){
        big=*i;
        ptr=i;
        for(j=i;j<arr+n;j++){
            if(*j>big){
                big=*j;
                ptr=j;
            }

        }
        *ptr=*i;
        *i=big;
    }
    for(int k=0;k<n;k++){
        printf("%d\t"3,arr[k]);

   }

    
    

    
    
    
    return 0;
}