#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    for (int i = 1; i<=a; i++) {
        for (int j = 1; j<=a; j++) {
                if (i == 1 || i == a) {
                    printf("*");
                }
                else {
                    for (int k = 1; k<=a; k++) {
                        if (k == 1 || k == a) {
                            printf("*");
                        }
                        else {
                            printf("7");
                        }
                    }
                }
            }
        // for (int k = 1; k<=a; k++) {
        //         printf("7");
        //     }
        printf("\n");
    }
    return 0;
}