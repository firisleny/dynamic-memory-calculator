#include <stdio.h>
#include <stdlib.h>
#include "calcul.h"

int main(int argc, char *argv[]) {

	int* calculType = NULL;
	calculType = malloc(sizeof(int));
	if (calculType == NULL) {
		return EXIT_FAILURE;
	}

	char* finishType = NULL;
	finishType = malloc(sizeof(char));
	if (finishType == NULL) {
		return EXIT_FAILURE;
	}

	printf("Calculatrice Malloc !\n");

	do {
		do {
			printf("\nChoississez votre calcul...\n1) Addition\n2) Soustraction\n3) Multiplication\n4) Division\n5) Modulo\n");
			scanf(" %d", calculType);
		} while (*calculType != 1 && *calculType != 2 && *calculType != 3 && *calculType != 4 && *calculType != 5);

		switch (*calculType) {
		case 1:
			addition();
			break;
		case 2:
			soustraction();
			break;
		case 3:
			multiplication();
			break;
		case 4:
			division();
			break;
		case 5:
			modulo();
			break;
		}
		do {
			printf("\nVoulez vous faire un autre calule ? (O\\N)\n");
			scanf(" %c", finishType);
		} while (*finishType == "o" && *finishType == "O" && *finishType == "n" && *finishType == "N");

	} while (*finishType == "o" && *finishType == "O");

	free(calculType);
	free(finishType);
	return EXIT_SUCCESS;
}