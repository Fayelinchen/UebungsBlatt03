#include <stdio.h>

int main(void) 
{
	char a,b;
	int c;
	printf("Geben sie zwei ACSII-Zeichen ein:\n");
	c = scanf("%c%c", &a, &b);
	if (c != 2 || a = '\n' || b = '\n' || getchar() != '\n') {
		printf("Eingabe ist ungültig\n");
		return 1;
	}
	printf("Eingabe ist gültig\n");
	return 0;
}
