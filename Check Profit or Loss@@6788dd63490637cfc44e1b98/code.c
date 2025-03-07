#include <stdio.h>
int main () {
    int a,b,margin;
    scanf("%d %d",&a,&b);
    margin = b - a;
    if (margin<0) {
        printf("Loss");
    }
    else if (margin > 0) {
        printf("Profit");
    }
    else {
        printf("No Profit No Loss");
    }
    return 0;
}