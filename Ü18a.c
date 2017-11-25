#include <stdio.h>
#include <ctype.h>

int read_alpha();

int main(void) {
	int a;
	a = read_alpha();
	if (a == 0) {
		printf("Eingabe war ungueltig.\n");
	} else {
		printf("Eingabe war gueltig. Der ASCI-Code lautet: %i", a);
	}
	return 0;
}

int read_alpha() 
{
	int alpha;
	int status;
	printf("Geben Sie einen Kleinbuchstaben ein: ");
	status = scanf("%c", &alpha);
	if (status != 1 ||  getchar() != '\n' || islower(alpha) == 0) {
		while (getchar() != '\n') {}
		return 0;
		}
	return alpha;
}