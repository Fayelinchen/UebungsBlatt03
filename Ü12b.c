#include <stdio.h>

int main(void) 
{
	double a,b;
	int c;
	printf("Geben sie zwei nichtnegative Dezimalzahlen getrennt durch ein Leerzeichen ein:\n");
	c = scanf("%lf %lf", &a, &b);
	if (c != 2 || ((a < 0) && (b < 0)) || getchar() != '\n') {
		printf("Eingabe ist ungültig\n");
		return 1;
	}
	printf("Eingabe ist gültig\n");
	return 0;
}
