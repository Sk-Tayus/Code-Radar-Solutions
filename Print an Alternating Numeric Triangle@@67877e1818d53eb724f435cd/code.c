#include <stdio.h>
int main () {
    int a;
    scanf("%d",&a);
    int n = 1;
    for (int i = 1; i<=a; i++) {
        for (int j = 1; j<=i; j++) {
            printf("%d ",n);
            if (j % 2 == 0) n+=2;
            else n--;
        }
        printf("\n");
    }
    return 0;
}