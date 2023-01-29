#include <stdio.h>

int main(){
    int inputInteger;
    char inputCharacter;
    double inputDouble;
    char inputString[100];

    /* Take input from user using scanf function */
    printf("Enter Integer,Character,double and string inputs\n");
    scanf("%d %c %f %s", &inputInteger, &inputCharacter, &inputDouble, inputString);
    printf("\n Integer you entered is : %d", inputInteger);
    printf("\n Character you entered is : %c", inputCharacter);
    printf("\n double number you entered is : %f", inputDouble);
    printf("\n string you entered is : %s", inputString);

    return 0;
}
