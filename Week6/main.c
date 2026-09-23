#include <stdio.h>

#define NUM_EMPLOYEEES 50

int main() {
    float salaries[NUM_EMPLOYEEES];
    float total = 0;
    float average;
    float highest;
    float lowest;
    float searchSalary;
    int found = 0;

    // Capture 50 employee salaries
    for (int i = 0; i < NUM_EMPLOYEEES; i++) {
        printf("Enter salary for employee %d: ", i + 1);
        scanf("%f", &salaries[i]);

    // Add each salary to the total    
        total += salaries[i];

    // Use the first salary as the initial highest and lowest
        if (i == 0) {
            highest = salaries[i];
            lowest = salaries[i];
        }  
        
    //Find the highest salary
        if (salaries[i] > highest) {
                highest = salaries[i];
        }

    //Find the lowest salary
            if (salaries[i] < lowest) {
                lowest = salaries[i];
            }
        }

    // Calculate the average salary
    average = total / NUM_EMPLOYEEES;

    //Display all salaries
    printf("\nSalaries of all employees:\n");
    for (int i = 0; i < NUM_EMPLOYEEES; i++) {
        printf("Employee %d: $%.2f\n", i + 1, salaries[i]);
    }

    // Display salary statistics
    printf("\nTotal Salary: $%.2f\n", total);
    printf("Average Salary: $%.2f\n", average);
    printf("Highest Salary: $%.2f\n", highest);
    printf("Lowest Salary: $%.2f\n", lowest);

    // Search for a specific salary
    printf("\nEnter a salary to search for: ");
    scanf("%f", &searchSalary);

    for (int i = 0; i < NUM_EMPLOYEEES; i++) {
        if (salaries[i] == searchSalary) {
            printf("Salary $%.2f found for employee %d.\n", searchSalary, i + 1);
            found = 1;
        
        }
    }
 
    // Display message if salary not found
    if (found == 0) {
        printf("Salary $%.2f not found for any employee.\n", searchSalary);
    }

    return 0;
}
    
