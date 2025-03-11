#include <stdio.h>
int main() {
    char grade;
    scanf("%c", &grade);
    if (grade == 'R')
        printf("Stop");
    else if (grade == 'G')
        printf("Go");
    else if (grade == 'Y')
        printf("Slow Down");
    else if (grade == 'D')
        printf("Below Average\n");
    else if (grade == 'F')
        printf("Fail\n");
    else
        printf("Invalid input");

    return 0;
}
