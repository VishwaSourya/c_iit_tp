#include<stdio.h>
#include<stdlib.h>
int** create_jagged_array(int *col_sizes, int rows){
    int** jaggedarray=(int**)malloc(rows*sizeof(int*));
    if(!jaggedarray){
        printf("Memory allocation failed.\n");
        return NULL;
        

    }
    for(int i=0;i<rows;i++){
        jaggedarray[i]=(int*)malloc(col_sizes[i] * sizeof(int));
        if(!jaggedarray[i]){
            printf("Memory allocation failed for row %d. \n",i);
            return NULL;

        }
    }
    return jaggedarray;
}
void populatejaggedarray(int** jaggedarray,int* col_sizes,int rows){
    for(int i=0;i<rows;i++){
        for(int j=0 ;j<col_sizes[i];j++ ){
            jaggedarray[i][j]=i+j;
            
        }
    }
}
void printjaggedarray(int** jaggedarray,int* col_sizes,int rows){
    for(int i=0;i<rows;i++){
        for(int j=0;j<col_sizes[i];j++){
            printf("%d\t",jaggedarray[i][j]);

        }
        printf("\n");

    }
}
int main(){
    int rows=4;
    int col_size[]={3,4,2,5};
    int** jaggedarray=create_jagged_array(col_size,rows);
    if(!jaggedarray){
        return 1;

    }
    populatejaggedarray(jaggedarray,col_size,rows);
    printf("The jagged array is:\n");
    printjaggedarray(jaggedarray,col_size,rows);

}