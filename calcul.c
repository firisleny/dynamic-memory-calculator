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

	printf("Vous avez choisie l'addition.\nEntrée le premier chiffre a additionné\n");
	scanf(" %d", chiffreUn);

	printf("\nEntrée le deuxieme chiffre a additionné\n");
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

	printf("Vous avez choisie la soustraction.\nEntrée le premier chiffre a soustraire\n");
	scanf(" %d", chiffreUn);

	printf("\nEntrée le deuxieme chiffre a soustraire\n");
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

	printf("Vous avez choisie la multiplication.\nEntrée le premier chiffre a multiplié\n");
	scanf(" %d", chiffreUn);

	printf("\nEntrée le deuxieme chiffre a multiplié\n");
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

	printf("Vous avez choisie la division.\nEntrée le premier chiffre a divisé\n");
	scanf(" %d", chiffreUn);

	do {
		printf("\nEntrée le deuxieme chiffre a divisé\n");
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

	printf("Vous avez choisie le modulo.\nEntrée le premier chiffre pour obtenir le reste de cette division\n");
	scanf(" %d", chiffreUn);

	do {
		printf("\nEntrée le deuxieme chiffre pour obtenir le reste de cette division\n");
		scanf(" %d", chiffreDeux);
		if (*chiffreDeux == 0) {
			printf("Division par zero impossible");
		}
	} while (*chiffreDeux == 0);

	printf("Le resultat de %d %% %d est %d", *chiffreUn, *chiffreDeux, (*chiffreUn % *chiffreDeux));

	free(chiffreUn);
	free(chiffreDeux);
}