#include <stdio.h>
#include <string.h>

#define EMPLOYEEES 50
#define DEPARTMENTS 10 
#define VEHICLES 20

int main() {
    float salaries[EMPLOYEEES];
    float budgets[DEPARTMENTS];
    char registrations[VEHICLES][20]; 

    float total = 0;
    float average;
    float highest;
    float lowest;
    float searchSalary;
    
    float totalBudget = 0;
    float averageBudget;
    float temp;

    char searchRegistration[20];

    int found;

    /* ============== Employee Salaries ============*/
    
    for (int i= 0; i < EMPLOYEEES; i++) {
        printf("Enter salary for employee %d: ", i + 1);
        scanf("%f", &salaries[i]);

    // Calculate total salary
        total += salaries[i];

    // Set the first salary as the highest and lowest for comparison
        if (i == 0) {
            highest = salaries[i];
            lowest = salaries[i];
        }
    // Find the highest salary

        if (salaries[i] > highest) {
                highest = salaries[i];
            }

    // Find the lowest salary

        if (salaries[i] < lowest) {
                lowest = salaries[i];
            }
        }

    // Calculate average salary
    average = total / EMPLOYEEES;

    // DISPLAY ALL EMPLOYEE SALARIES
    printf("\nEmployee Salaries:\n");

    for (int i = 0; i < EMPLOYEEES; i++) {
        printf("Employee %d: %.2f\n", i + 1, salaries[i]);
    }

    printf("Average Salary: %.2f\n", average);
    printf("Highest Salary: %.2f\n", highest);
    printf("Lowest Salary: %.2f\n", lowest);

    // SEARCH FOR A SPECIFIC SALARY
    printf("\nEnter a salary to search for: ");
    scanf("%f", &searchSalary);

    found = 0; 

    for (int i = 0; i < EMPLOYEEES; i++) {
        if (salaries[i] == searchSalary) {
            printf("Salary %.2f found for employee %d.\n", searchSalary, i + 1);
            found = 1;

        }
    }

    if (found == 0) {
        printf("Salary %.2f not found.\n", searchSalary);
    }
    

    /* ============== Department Budgets ============*/
    for (int i = 0; i < DEPARTMENTS; i++) {
        printf("Enter budget for department %d: ", i + 1);
        scanf("%f", &budgets[i]);

        totalBudget += budgets[i];

    }

    averageBudget = totalBudget / DEPARTMENTS;

    // SORT BUDGETS FROM LOWEST TO HIGHEST
    for (int i = 0; i < DEPARTMENTS - 1; i++) {
        for (int j = 0; j < DEPARTMENTS - i - 1; j++) {
            if (budgets[j] > budgets[j + 1]) {
                temp = budgets[j];
                budgets[j] = budgets[j + 1];
                budgets[j + 1] = temp;
            }
        }

        printf("\nTotal Budget: %.2f\n", totalBudget);
        printf("Average Budget: %.2f\n", averageBudget);

        /* ============= Vehicle Registrations ============*/

        for (int i = 0; i < VEHICLES; i++) {
            printf("Enter registration for vehicle %d: ", i + 1);
            scanf("%s", registrations[i]);
        }   

        printf("\nVehicle Registrations:\n");
        for (int i = 0; i < VEHICLES; i++) {
            printf("Vehicle %d: %s\n", i + 1, registrations[i]);
        }

        // SEARCH FOR A SPECIFIC REGISTRATION
        printf("\nEnter a registration to search for: ");
        scanf("%19s", searchRegistration);

        found = 0;

        for (int i = 0; i < VEHICLES; i++) {
            if (strcmp(registrations[i], searchRegistration) == 0) {
                printf("Registration %s found for vehicle %d.\n", searchRegistration, i + 1);
                found = 1;
            }
        }

        if (found == 0) {
            printf("Registration %s not found.\n", searchRegistration);
        }

    return 0;
}
    
