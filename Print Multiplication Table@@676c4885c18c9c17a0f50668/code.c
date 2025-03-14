#include <stdio.h>
int main () {
    int a;
    scanf("%d",&a);
    for (int i = 1; i<=a; i++) {
        printf("%d xi %d = %d ",a,i,a*i);
    }
    return 0;
}