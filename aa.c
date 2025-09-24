#include <stdio.h>

int main() { 
    int marks;

    // Prompt the user to enter marks
    printf("Enter marks (0 - 100): ");
    scanf("%d", &marks);
    // Check the grade based on the input
    if (marks < 30) {
        printf("C\n");
    } 
    else if (marks >= 30 && marks < 70) {
        printf("B\n");
    } 
    else if (marks >= 70 && marks < 90) {
        printf("A\n");
    } 
    else {
        printf("A+\n");
    }

    return 0;
}
