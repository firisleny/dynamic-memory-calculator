#include <stdio.h>
#include <stdlib.h>
#include "calcul.h"

void addition () {
	int *chiffreUn, *chiffreDeux = NULL;

	chiffreUn = malloc(sizeof(int));
	if (chiffreUn == NULL) {
		exit(1);
	}

	chiffreDeux = malloc(sizeof(int));
	if (chiffreDeux == NULL) {
		exit(1);
	}

	printf("Vous avez choisie l'addition.\nEntr�e le premier chiffre a additionn�\n");
	scanf(" %d", chiffreUn);

	printf("\nEntr�e le deuxieme chiffre a additionn�\n");
	scanf(" %d", chiffreDeux);

	printf("Le resultat de %d + %d est %d", *chiffreUn, *chiffreDeux, (*chiffreUn + *chiffreDeux));
}

void soustraction () {
	int* chiffreUn, * chiffreDeux = NULL;

	chiffreUn = malloc(sizeof(int));
	if (chiffreUn == NULL) {
		exit(1);
	}

	chiffreDeux = malloc(sizeof(int));
	if (chiffreDeux == NULL) {
		exit(1);
	}

	printf("Vous avez choisie la soustraction.\nEntr�e le premier chiffre a soustraire\n");
	scanf(" %d", chiffreUn);

	printf("\nEntr�e le deuxieme chiffre a soustraire\n");
	scanf(" %d", chiffreDeux);

	printf("Le resultat de %d - %d est %d", *chiffreUn, *chiffreDeux, (*chiffreUn - *chiffreDeux));

	free(chiffreUn);
	free(chiffreDeux);
}

void multiplication () {
	int* chiffreUn, * chiffreDeux = NULL;

	chiffreUn = malloc(sizeof(int));
	if (chiffreUn == NULL) {
		exit(1);
	}

	chiffreDeux = malloc(sizeof(int));
	if (chiffreDeux == NULL) {
		exit(1);
	}

	printf("Vous avez choisie la multiplication.\nEntr�e le premier chiffre a multipli�\n");
	scanf(" %d", chiffreUn);

	printf("\nEntr�e le deuxieme chiffre a multipli�\n");
	scanf(" %d", chiffreDeux);

	printf("Le resultat de %d * %d est %d", *chiffreUn, *chiffreDeux, (*chiffreUn * *chiffreDeux));

	free(chiffreUn);
	free(chiffreDeux);
}

void division () {
	int* chiffreUn, * chiffreDeux = NULL;

	chiffreUn = malloc(sizeof(int));
	if (chiffreUn == NULL) {
		exit(1);
	}

	chiffreDeux = malloc(sizeof(int));
	if (chiffreDeux == NULL) {
		exit(1);
	}

	printf("Vous avez choisie la division.\nEntr�e le premier chiffre a divis�\n");
	scanf(" %d", chiffreUn);

	do {
		printf("\nEntr�e le deuxieme chiffre a divis�\n");
		scanf(" %d", chiffreDeux);
		if (*chiffreDeux == 0) {
			printf("Division par zero impossible");
		}
	} while (*chiffreDeux == 0);

	printf("Le resultat de %d / %d est %d", *chiffreUn, *chiffreDeux, (*chiffreUn / *chiffreDeux));

	free(chiffreUn);
	free(chiffreDeux);
}

void modulo () {
	int* chiffreUn, * chiffreDeux = NULL;

	chiffreUn = malloc(sizeof(int));
	if (chiffreUn == NULL) {
		exit(1);
	}

	chiffreDeux = malloc(sizeof(int));
	if (chiffreDeux == NULL) {
		exit(1);
	}

	printf("Vous avez choisie le modulo.\nEntr�e le premier chiffre pour obtenir le reste de cette division\n");
	scanf(" %d", chiffreUn);

	do {
		printf("\nEntr�e le deuxieme chiffre pour obtenir le reste de cette division\n");
		scanf(" %d", chiffreDeux);
		if (*chiffreDeux == 0) {
			printf("Division par zero impossible");
		}
	} while (*chiffreDeux == 0);

	printf("Le resultat de %d %% %d est %d", *chiffreUn, *chiffreDeux, (*chiffreUn % *chiffreDeux));

	free(chiffreUn);
	free(chiffreDeux);
}