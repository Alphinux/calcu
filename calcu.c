#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>



int help() {
	printf("Usage: calcu --option\n\nCalcu is a simple calculator written in c.\nJust a small projekt nothing big. \n\nOptions:\n-h For help\n-a For addition\n-s For subtraction\n-m For multiplication\n-d For division\n-lcm For lowest common multiple\n");
}
	

int main(int argc, char *argv[]) {
	
	float num1, num2, solution;
	
	if (argv[1] == NULL || !strcmp(argv[1], "")) {
		help();
		return 0;
	}
	
	if (strcmp(argv[1], "-a") == 0) {
		printf("You selected addition \n");
	
		printf("Enter first number: ");
		scanf("%f", &num1);
		
		printf("Enter second number: ");
		scanf("%f", &num2);
		
		solution = num1 + num2;
	
		printf("%f + %f = %f \n", num1, num2, solution);
		return 0;
	}
	
	else if(strcmp(argv[1], "-s") == 0) {
		printf("You selected subtraction \n");
		
		printf("Enter minuend: ");
		scanf("%f", &num1);
		
		printf("Enter subtrahend: ");
		scanf("%f", &num2);
		
		solution = num1 - num2;
		
		printf("%f - %f = %f \n", num1, num2, solution);
	}
	
	else if(strcmp(argv[1], "-m") == 0) { 
		printf("You have selected multiplication \n");
		
		printf("Enter the first factor: ");
		scanf("%f", &num1);
		
		printf("Enter the second factor: ");
		scanf("%f", &num2);

		solution = num1*num2;
		
		printf("%f * %f = %f \n", num1, num2, solution);
	}
	
	else if(strcmp(argv[1], "-d") == 0) {
		printf("You ave selected division \n");
		
		printf("Enter the dividend: ");
		scanf("%f", &num1);
		
		printf("Enter the divisor: ");
		scanf("%f", &num2);
		
		solution = num1/num2;
		
		printf("%f : %f = %f \n", num1, num2, solution);
	}
	
	else if(strcmp(argv[1], "-p") == 0) {
		
		printf("You have selected potentation. \n");
		
		printf("Enter the number to be potentiated: ");
		scanf("%f", &num1);
		
		printf("Enter the power: ");
		scanf("%f", &num2);
		
		solution = powf(num1, num2);
		
		printf("%f ^ %f = %f \n", num1, num2, solution);	
	}
	
	else if(strcmp(argv[1], "-lcm") == 0) {
		
		int num1, num2, solution;
		
		printf("You have selected the calculation of the least common multiple \n");
		
		printf("Enter the first number: ");
		scanf("%i", &num1);
		
		printf("Enter the second number: ");
		scanf("%i", &num2);
		
		solution = (num1 > num2) ? num1 : num2;
		
		while (1) {
			if (solution % num1 == 0 && solution % num2 == 0) {
				printf("The LCM of %d and %d is %d. \n", num1, num2, solution);
				break;
			}
			++solution;
		}
	}
	
	else if(strcmp(argv[1], "-h") == 0) {
		help();
	}
}
