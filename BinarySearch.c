#include<stdio.h>
//search binary function
int searchbinary(int *a[],int size,int ele){
    int low,mid,high;
    low=0;
    high=size-1;
    while(low<high){
        mid=(low+high)/2;
    if(a[mid]==ele){
        return mid;}
    else if(a[mid]<ele){
        low=mid+1;}
    else{
        high=mid-1;}}}
//main function
int main(){
    int size;
    printf("enter the size of array\n");
    scanf("%d",&size);
    int a[size];
    printf("enter the elemens of array\n");
    for(int i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    int ele;
    printf("What number you want \n");
    scanf("%d",&ele);
    int index=searchbinary(a,size,ele);
    printf("the element %d is found at the index %d\n",ele,index);
    return 0;}