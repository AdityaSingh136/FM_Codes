#include <stdio.h>
int main()
{
  int j = 0, count = 0;
  char inputstring[1000];

  printf("Input a string:\n");
  gets(inputstring);

  while (inputstring[j] != '\0') {
    if (inputstring[j] == 'a' || inputstring[j] == 'A' || inputstring[j] == 'e' || inputstring[j] == 'E' || inputstring[j] == 'i' ||
 inputstring[j] == 'I' || inputstring[j] =='o' || inputstring[j]=='O' || inputstring[j] == 'u' || inputstring[j] == 'U')
      count++;
    j++;
  }

  printf("Number of vowels in the string: %d", count);

  return 0;
}
