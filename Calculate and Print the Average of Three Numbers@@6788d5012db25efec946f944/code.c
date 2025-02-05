#include <stdio.h>
int main() {
    int a,b,c;
    float res;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    res = (a+b+c)/3;
    printf("Average: %f", res);
    return 0;
}