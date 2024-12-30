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
    int k;
    printf("Enter the element u want to search:\t\n");
    scanf("%d",&k);
    int *j;
    for(j=arr;j<arr+n;j++){
        if(*j==k){
            printf("The value %d was found in the array.\n",k);
            break;

        }
        if(j=arr+n-1 && *j!=k){
            printf("The element searched is absent in the array.\n");
            break;
        }
    }


return 0;
}