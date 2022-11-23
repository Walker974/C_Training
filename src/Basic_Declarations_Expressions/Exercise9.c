/*
 Created by Walker on 09/11/2022.
*/

#include "stdio.h"
int main() {
    int N;int count;
    printf("Entrez la valeur de N:");
    scanf("%d", &N);
    if (N < 1000){
        printf("N ne comport pas 4 chiffres\n");
        return 0;
    }
    printf("%d", (N % 1000));
    printf("Le 1 er chiffre est: %d\n", N / 1000);
    printf("Le 2 eme chiffre est: %d\n", (N % 1000) / 100);
    printf("Le 3 eme chiffre est: %d\n", (N % 100) / 10);
    printf("Le 4 eme chiffre est: %d\n", N % 10);
    return 0;
}
