#include <stdio.h>
int main() {
   int i, j, rows;
   printf("Enter the number of rows: "); //rows input from user
   scanf("%d", &rows);
   for (i = 1; i <= rows; ++i) {
      for (j = 1; j <= i; ++j) {
         printf("*");
      }
      printf("\n");
      printf("\n");
   }
   return 0;
}
