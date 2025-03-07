#include <stdio.h>

int main() {
    int marks;
    
    // Input marks
    printf("Enter marks: ");
    scanf("%d", &marks);

    // Grading system
    if (marks >= 90) {
        printf("\n");
    } else if (marks >= 80) {
        printf("B\n");
    } else if (marks >= 70) {
        printf("Grade: C\n");
    } else if (marks >= 60) {
        printf("D\n");
    } else {
        printf("F\n");
    }

    return 0;
}
