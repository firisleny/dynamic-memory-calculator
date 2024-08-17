# Calculatrice avec Gestion Dynamique de Mémoire

## Description

Ce projet est une calculatrice en C qui utilise exclusivement `malloc` pour la gestion de la mémoire. Contrairement aux approches classiques, cette calculatrice alloue dynamiquement toute sa mémoire à l'exécution, démontrant l'utilisation de la gestion dynamique de la mémoire en C. 

## Fonctionnalités

- Addition
- Soustraction
- Multiplication
- Division
- Modulo

Chaque opération est effectuée après avoir alloué dynamiquement de la mémoire pour les entrées et les résultats, démontrant une approche purement basée sur `malloc` pour la manipulation de la mémoire.

## Conception

- **Gestion de la Mémoire :** Toutes les variables utilisées pour les calculs sont allouées dynamiquement avec `malloc`. La mémoire est libérée une fois les opérations terminées pour éviter les fuites de mémoire.
- **Entrées Utilisateur :** Les choix de calcul et les valeurs numériques sont stockés dans des espaces mémoire alloués dynamiquement.
- **Erreurs :** Le programme vérifie la réussite des appels à `malloc` et gère les erreurs de manière appropriée.