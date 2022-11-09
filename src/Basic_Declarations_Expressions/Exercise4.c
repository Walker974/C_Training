/*
 Created by Walker on 09/11/2022.

    Exercise instructions:
    Write a C program that accepts an employee's ID, total worked hours of a month and the amount he received per hour. Print the employee's ID and salary (with two decimal places) of a particular month. Go to the editor
    Test Data :
    Input the Employees ID(Max. 10 chars): 0342
    Input the working hrs: 8
    Salary amount/hr: 15000
    Expected Output:
    Employees ID = 0342
    Salary = U$ 120000.00
*/
#include <stdio.h>

int main() {
    char Employee_Id[10];
    int working_hours;
    float salary_per_hour = 15000;
    printf("Input the Employees ID(Max. 10 chars):");
    scanf("%s", Employee_Id);
    printf("Input the working hours:");
    scanf("%d", &working_hours);
    printf("Employee ID: %s\n", Employee_Id);
    float salary = working_hours * salary_per_hour;
    printf("Salary = U$ %f", salary);
    return 0;
}
