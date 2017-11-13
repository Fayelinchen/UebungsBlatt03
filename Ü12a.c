#include <stdio.h>

int main(void) 
{
	int a,b;
	printf("Geben sie eine ganze Zahl ein:\n");
	a = scanf("%i", &b);
	if (a == 0 || getchar() != '\n') {
		printf("Eingabe ist ungültig\n");
		return 1;
	}
	printf("Eingabe ist gültig\n");
	return 0;
}