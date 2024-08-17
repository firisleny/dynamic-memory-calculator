# Calculatrice avec Gestion Dynamique de M�moire

## Description

Ce projet est une calculatrice en C qui utilise exclusivement `malloc` pour la gestion de la m�moire. Contrairement aux approches classiques, cette calculatrice alloue dynamiquement toute sa m�moire � l'ex�cution, d�montrant l'utilisation de la gestion dynamique de la m�moire en C. 

## Fonctionnalit�s

- Addition
- Soustraction
- Multiplication
- Division
- Modulo

Chaque op�ration est effectu�e apr�s avoir allou� dynamiquement de la m�moire pour les entr�es et les r�sultats, d�montrant une approche purement bas�e sur `malloc` pour la manipulation de la m�moire.

## Conception

- **Gestion de la M�moire :** Toutes les variables utilis�es pour les calculs sont allou�es dynamiquement avec `malloc`. La m�moire est lib�r�e une fois les op�rations termin�es pour �viter les fuites de m�moire.
- **Entr�es Utilisateur :** Les choix de calcul et les valeurs num�riques sont stock�s dans des espaces m�moire allou�s dynamiquement.
- **Erreurs :** Le programme v�rifie la r�ussite des appels � `malloc` et g�re les erreurs de mani�re appropri�e.