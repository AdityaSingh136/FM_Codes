#include<stdio.h>
int main(){
    int i,j,m,n,a[100][100],sumd=0;
    printf("enter dimensions rows and columns:");
    scanf("%d %d",&m,&n);
    printf("enter elements:");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d ",a[i][j]);}
        puts("");
    }
    int sum = 0;

    // Finding the sum
    for (i = 0; i < m; ++i) {
        for (j = 0; j < n; ++j) {
            // Add the element
            sum = sum + a[i][j];

        }
    }
printf("sum of elements= %d",sum);
puts("");
if(m!=n)
    printf("sum of diagonal elements can't be calculated");
    else
        for(i=0;i< n;i++)
 {
  for(j=0;j< n;j++)
  {
   if(i==j || i+j==n-1)
   {
    sumd = sumd + a[i][j];
   }}}
printf("sum of diagonal elements= %d",sumd);
    return 0;}

