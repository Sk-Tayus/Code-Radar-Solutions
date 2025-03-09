#include <stdio.h>
int main () {
    int a;
    scanf("%d",&a);
    if (a < 2) {
        printf("Not Prime");
    }

    else if (a>2){
        for (int i = 0; i*i <= a; i++) {
            if (a % i == 0) {
                printf("Not Prime");
            }
            else {
                printf("Prime");
            }
        }
    }
    else {
        printf("Prime");
    }
    return 0;
}
