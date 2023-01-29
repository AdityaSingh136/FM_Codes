#include <stdio.h>
int main() {
   int i=5, j; //rows already defined in the question
   for (i = 1; i <= 5; ++i) {
      for (j = 1; j <= i; ++j) {
         printf("*");
      }
      printf("\n");
      printf("\n");
   }
   return 0;
}
