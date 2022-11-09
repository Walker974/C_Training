/*
 Created by Walker on 09/11/2022.

    Exercise instructions:
    Write a C program to compute the perimeter and area of a circle with a given radius.
    Expected Output:
    Perimeter of the Circle = 37.680000 inches
    Area of the Circle = 113.040001 square inches
*/

#include <stdio.h>

int main() {
    double radius = 6;
    double perimeter = 2 * 3.14 * radius;
    printf("Perimeter of the Circle = %f inches \n", perimeter);
    double area = 3.14 * radius * radius;
    printf("Area of the Circle = %f square inches", area);
    return 0;
}
