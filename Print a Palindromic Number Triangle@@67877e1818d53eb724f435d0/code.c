#include <stdio.h>
int main() {
    int a;
    scanf("%d", &a);
    for (int i = 1; i <= a; i++) {
        for (int k = 1; k<=a-i; k++) {
            printf(" ");
        }
        for (int j = 1; j <= 2*i-1; j++) {
            if (j>i) break;
            printf("%d", j);
        }
        if (i != 1) {
            for (int l = i-1; l>=1; l--) {
                printf("%d",l);
            }
        }
        printf("\n");
    }
    return 0;
}
