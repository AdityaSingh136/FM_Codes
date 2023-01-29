#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
	char ch;
	double a, b;
	while (1) {
		printf("Enter an operator (+, -, *, /,e,t), if want to exit press x: ");
		scanf(" %c", &ch);
		// to exit
		if (ch == 'x')
			exit(0);
		printf("Enter two first and second operand: ");
		scanf("%lf %lf",&a,&b);
		// Using switch case we will differentiate'
		// operations based on different operator
		switch (ch) {
		// For Addition
		case '+':
			printf("%.1lf + %.1lf = %.1lf\n", a, b, a + b);
			break;
		// For Subtraction
		case '-':
			printf("%.1lf - %.1lf = %.1lf\n", a, b, a - b);
			break;
		// For Multiplication
		case '*':
			printf("%.1lf * %.1lf = %.1lf\n", a, b, a * b);
			break;
		// For Division
		case '/':
		    if(b==0)
                printf("operation can't be performed");
            else
			printf("%.1lf / %.1lf = %.1lf\n", a, b, a / b);
			break;
 // For Exponent
        case'e':
            printf("%.1lf / %.1lf = %.1lf\n", a, b,pow(a,b));
        // For trignometry
        case't': ;
            printf("cos(%f ) = %f\n", a,cos(a));
            printf("sin(%f) = %f\n", a,sin(a));
            printf("tan(%f) = %f\n", a,tan(a));

		// If operator doesn't match any case constant
		default:
			printf("Error! please write a valid operator\n");
		}
	}
}
