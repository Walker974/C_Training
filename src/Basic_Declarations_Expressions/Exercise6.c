/*
 Created by Walker on 09/11/2022.
*/
#include "stdio.h"
#include "math.h"

int main(){
    float A;float B;
    printf("Enter the value of A:");
    scanf("%f", &A);
    printf("Enter the value of B:");
    scanf("%f", &B);
    float C = sqrt(pow(A, 2) + pow(B, 2));
    printf("The value of C is %f", C);
}
