#include <stdio.h>
#include <time.h>
#include <stdlib.h>

bool hasGuessed = false, gameOn = true;
int number, guess, tries, MAXNUMBER;

int main() {
	MAXNUMBER  = 51;
	srand(time(NULL));
	
	while (gameOn) {
		number     = rand() % MAXNUMBER;
		tries      = 0;
		hasGuessed = false;
		
		system("cls");
		
		printf("Rango: [0-%d]\n\n", (MAXNUMBER - 1));
		
		while (!hasGuessed) {
			printf("Trata de Adivinar el Numero: ");
			scanf("%i", &guess);
			
			if (guess == number) {
				hasGuessed = true;
				
				printf("\n|| Has ganado. (Intentos: %d) ||\n", tries);
				system("pause");
				
			} else if (guess > number) {
				printf("Demasiado alto.\n\n");
				
				tries += 1;
				
			} else if (guess < number) {
				printf("Demasiado bajo.\n\n");
				
				tries += 1;
			}
		}
	}
	return 0;
}

