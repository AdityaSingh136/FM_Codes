#include<stdio.h>
void main(){
    int a,arr[a];
    printf("enter no. of elements:");
    scanf("%d",&a);
    printf("enter elements:");
    for( int i=0;i<a;i++){
            scanf("%d",&arr[i]);
    }
    printf("size= %d",sizeof(arr));
 }
