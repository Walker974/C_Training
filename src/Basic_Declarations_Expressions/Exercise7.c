/*
 Created by Walker on 09/11/2022.

 Exercise Instructions:
 Write a program that calculates the sum of four numbers of type int entered on the keyboard,

    a) using 5 variables (storage of entered values)

    b) using 2 variables (loss of entered values)
*/

#include "stdio.h"
int main(){
    int a;int b;int c;int d;
    printf("Entrez la premi%cre valeur:", 138);
    scanf("%d", &a);
    printf("Entrez la deuxi%cme valeur:", 138);
    scanf("%d", &b);
    printf("Entrez la troisi%cme valeur:", 138);
    scanf("%d", &c);
    printf("Entrez la quatri%cme valeur:", 138);
    scanf("%d", &d);
    int somme = a+b+c+d;
    printf("la somme est: %d", somme);
    return 0;
}
/*
 Second Question:

#include "stdio.h"
int main() {
    int a;int result;
    printf("Entrez la premi%cre valeur:", 138);
    scanf("%d", &a);
    result += a;
    printf("Entrez la deuxi%cme valeur:", 138);
    scanf("%d", &a);
    result += a;
    printf("Entrez la troisi%cme valeur:", 138);
    scanf("%d", &a);
    result += a;
    printf("Entrez la quatri%cme valeur:", 138);
    scanf("%d", &a);
    result += a;
    printf("la somme est: %d", result);
    return 0;
}
*/