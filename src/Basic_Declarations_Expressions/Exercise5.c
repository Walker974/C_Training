/*
 Created by Walker on 09/11/2022.

    Exercise instructions:
    Write a C program that takes a string and two integers (n1, n2). Now reverse the sequence of characters of the string between n1 and n2.
    Sample Date:
    ("abcdxyabcd", 5, 6) -> "abcdyxabcd"
    ("Exercises", 1, 3) -> "exercises"
*/
#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    printf("%d", sizeof(str));
    int n1, n2;
    printf("Enter the first integer to reverse: ");
    scanf("%d", &n1);
    if (n1 > strlen(str)) {
        printf("The first integer is greater than the length of the string.");
        return 0;
    }
    printf("Enter the second integer to reverse: ");
    scanf("%d", &n2);
    if (n2 > strlen(str)) {
        printf("The second integer is greater than the length of the string.");
        return 0;
    }
    if (n1 > n2) {
        printf("The first integer is greater than the second integer.");
        return 0;
    }
    char strn1 = str[n1];
    char strn2 = str[n2];
    str[n1] = strn2;
    str[n2] = strn1;
    printf("The reversed string is %s", str);
}
/* TODO: Fix the bug where the string is not reversed. */