#include<stdio.h>
//print array function
void printarray(int* A[],int n){
    for (int i = 0; i < n; i++){
       printf("%d\t",A[i]);
    }
    printf("\n");}
//bubble sort function
void BubbleSort(int *A,int n){
    int swap,swaped=0,j;
    
    for (int i = 0; i < n-1; i++){
        for ( j = 0; j < n-1-i; j++){
            if(A[j]>A[j+1]){
                sort(A,j,(j+1));
                swaped=1;}}}
                if(swaped==0){
                    printf("already sorted\n");
                }}

//Sort Fuction
void sort(int *A[],int x,int y){
    int swap;
                swap=A[x];
                A[x]=A[y];
                A[y]=swap;
}
//main function
int main(){
    int i,n;
    printf("enter the size of the array\n");
    scanf("%d",&n);
    int A[n];
    for(i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    printarray(A,n);
    BubbleSort(A,n);
    printarray(A,n);
    return 0;}