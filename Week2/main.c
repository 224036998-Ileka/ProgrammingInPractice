#include <stdio.h>

int main () 

{
    double revenue, expenses, balance;
    int departments; 
    double payroll, procurement, assets;

    printf("Municipal Budget Calculator\n");
    printf("Enter Total Revenue: ");
    scanf("%lf", &revenue);

    printf("Enter Total Expenses: ");
    scanf("%lf", &expenses);

    balance = revenue - expenses;

    printf("Enter Number of Departments: ");
    scanf("%d", &departments);

    printf("Enter Total Payroll: ");
    scanf("%lf", &payroll);

    printf("Enter Total Procurement: ");
    scanf("%lf", &procurement);

    printf("Enter Total Assets: ");
    scanf("%lf", &assets);

    printf("\n-------Municipal Financial Summary------------------------\n");
    printf("Departments: %d\n", departments);
    printf("Total Payroll: %.2lf\n", payroll);
    printf("Total Procurement: %.2lf\n", procurement);
    printf("Total Assets: %.2lf\n", assets);
    printf("Balance: %.2lf\n", balance);

return 0;



}