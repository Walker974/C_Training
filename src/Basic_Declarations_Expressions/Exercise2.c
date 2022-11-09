/*
 Created by Walker on 09/11/2022.

    Exercise instructions:
    Write a C program to print the following characters in a reverse way.
    Test Characters: 'X', 'M', 'L'
    Expected Output:
    The reverse of XML is LMX
*/
#include "stdio.h"

int main() {
    char x[] = "X";
    char m[] = "M";
    char l[] = "L";
    printf("The reverse of XML is %s%s%s", l, m, x);
    return 0;
}

// Second solution

/*
#include <string.h>
int main() {
    char xml[] = "XML";
    printf("The reverse of XML is %s", strrev(xml));
    return 0;
}
 */