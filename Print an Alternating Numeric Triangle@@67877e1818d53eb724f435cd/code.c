#include <stdio.h>
int main () {
    int a;
    scanf("%d",&a);
    int n = 1;
    for (int i = 1; i<=a; i++) {
        for (int j = 1; j<=i; j++) {
            // printf("%d ",n);
            if (j == (i-1)) printf("0");
            else printf("1");
        }
        printf("\n");
    }
    return 0;
}