#include <stdio.h>
#include <string.h>
int main(){
    char string[100];
    int i, strlength;
    int flag = 0;

    printf("Enter a string you want to test:");
    scanf("%s", string);

    strlength = strlen(string);

    for(i=0;i < strlength ;i++){
        if(string[i] != string[strlength-i-1]){
            flag = 1;
            break;
           }
        }

    if (flag) {
        printf("%s is not a palindrome", string);
    }
    else {
        printf("%s is a palindrome", string);
    }
    return 0;
}
