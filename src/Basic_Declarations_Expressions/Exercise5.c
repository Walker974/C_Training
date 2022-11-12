/*
 Created by Walker on 09/11/2022.
*/
#include "stdio.h"
#include "math.h"

int main() {
    int A;int B;int C;
    printf("Enter the value of A:");
    scanf("%d", &A);
    printf("Enter the value of B:");
    scanf("%d", &B);
    printf("Enter the value of C:");
    scanf("%d", &C);
    double P = (A + B + C) / 2;
    double S = sqrt(P * (P - A) * (P - B) * (P - C));
    printf("The area of the triangle is %f", S);
}
