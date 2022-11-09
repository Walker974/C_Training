/*
 Created by Walker on 09/11/2022.

    Exercise instructions:
    Write a C program to print your name, date of birth. and mobile number.
    Expected Output:
    Name   : Alexandra Abramov
    DOB    : July, 14, 1975
    Mobile : 99-9999999999
*/

#include <stdio.h>

int main() {
    char Name[] = "Alexandra Abramov";
    char DOB[] = "July 14, 1975";
    char Mobile[] = "99-9999999999";
    printf("Name: %s \n", Name);
    printf("DOB: %s \n", DOB);
    printf("Mobile: %s \n", Mobile);
    return 0;
}