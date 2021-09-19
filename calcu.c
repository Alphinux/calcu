#include <stdio.h>
#include<string.h>
#include <stdlib.h>


int help() {
	printf("Usage: calcu --option\n\nCalcu is a simple calculator written in c.\nJust a small projekt nothing big. \n\nOptions:\n-h For help\n-a For addition\n-s For subtraction\n");
}
	

int main(int argc, char *argv[]) {
	
	int num1, num2, solution;
	
	if (argv[1] == NULL || !strcmp(argv[1], "")) {
		help();
		return 0;
	}
	
	if (strcmp(argv[1], "-a") == 0) {
		printf("You selected addition \n");
	
		printf("Enter first number: ");
		scanf("%i", &num1);
		
		printf("Enter second number: ");
		scanf("%i", &num2);
		
		//Die Summe berechnen
		solution = num1 + num2;
	
		printf("Das Ergebnis ist %i + %i = %i \n", num1, num2, solution);
		return 0;
	}
	else if(strcmp(argv[1], "-s") == 0) {
		printf("You selected subtraction \n");
		
		printf("Enter minuend: ");
		scanf("%i", &num1);
		
		printf("Enter subtrahend: ");
		scanf("%i", &num2);
		
		//Calculate the difference
		solution = num1 - num2;
		
		printf("%i - %i = %i \n", num1, num2, solution);
		
	}
	else if(strcmp(argv[1], "-h") == 0) {
		help();
	}
}
