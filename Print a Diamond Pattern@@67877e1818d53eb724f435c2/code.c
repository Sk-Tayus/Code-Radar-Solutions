#include <stdio.h>
int main () {
    int a;
    scanf("%d",&a);
    for (int i = 1; i <= a; i++) {
        // for (int k = 1; k<=a-i; k++) {
        //     printf(" ");
        // }
        // for (int j = 1; j<=(2*i-1); j++) {
        //     printf("*");
        // }
        for (int l = 0; l<=i; l++) {
            printf("7");
        }
        printf("\n");
    }
    return 0;
}