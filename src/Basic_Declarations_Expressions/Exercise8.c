/*
 Created by Walker on 09/11/2022.
*/

#include <stdio.h>
int main(){
    int A;int B;int C;
    printf("entrez la valeur de A:");
    scanf("%d",&A);
    printf("entrez la valeur de B:");
    scanf("%d",&B);
    printf("entrez la valeur de C:");
    scanf("%d",&C);

    if (A == B + C){
        printf("la valeur qui est egale a la somme des deux autres est: %d\n",A);
        return 0;
    } else if (B == A + C){
        printf("la valeur qui est egale a la somme des deux autres est: %d\n",B);
        return 0;
    } else if (C == A + B){
        printf("la valeur qui est egale a la somme des deux autres est: %d\n",C);
        return 0;
    } else {
        printf("aucune valeur n ne correspond a la somme des deux autres");
    }
    return 0;
}