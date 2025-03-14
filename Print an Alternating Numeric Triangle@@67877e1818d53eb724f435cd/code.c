#include <stdio.h>
int main() {
    int a;
    scanf("%d", &a);
    for (int i = 1; i <= a; i++) {
        int num = (i % 2 == 1) ? 1 : 0; // Start with 1 for odd rows, 0 for even rows
        for (int j = 1; j <= i; j++) {
            printf("%d ", num);
            num = 1 - num; // Alternate between 1 and 0
        }
        printf("\n");
    }
    return 0;
}
