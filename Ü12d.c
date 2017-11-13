#include <stdio.h>

int main(void) 
{
	int a,b;
	printf("Geben sie eine ganze Zahl zwischen -10 und 10 ein:\n");
	b = scanf("%i", &a);
	if (b != 1 || (a < -10) || (a > 10) || getchar() != '\n') {
		printf("Eingabe ist ungültig\n");
		return 1;
	}
	printf("Eingabe ist gültig\n");
	return 0;
}
