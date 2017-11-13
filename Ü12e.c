#include <stdio.h>

int main(void) 
{
	int a, c;
	char b;
	printf("Geben sie eine ganze positive Zahl unmittelbar gefolgt von einem Kleinbuchstaben ein:\n");
	c = scanf("%i%c", &a, &b);
	if (c != 2 || a < 0 || ((b < 97) && (b > 122)) || getchar() != '\n') {
		printf("Eingabe ist ungültig\n");
		return 1;
	}
	printf("Eingabe ist gültig\n");
	return 0;
}