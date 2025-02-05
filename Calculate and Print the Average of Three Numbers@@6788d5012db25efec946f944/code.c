#include <stdio.h>
int main() {
    int a,b,c;
    float res;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    res = (float)(a+b+c)/3;
    printf("Average: %.2f", res);
    return 0;
}