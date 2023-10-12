#include<stdio.h>
int search(int a[],int size,int element){
    for(int i=0;i<size;i++){
        if(a[i]==element){
            return i;}}
    return -1;}
int main(){
    int a[]={1,2,23,34,54,56,13,22,13,42,90};
    int size=sizeof(a)/sizeof(int);
    int element;
    printf("What number you want \n");
    scanf("%d",&element);
    int index=search(a,size,element);
    printf("the element %d is found at the position %d\n",element,index);
    return 0;}
