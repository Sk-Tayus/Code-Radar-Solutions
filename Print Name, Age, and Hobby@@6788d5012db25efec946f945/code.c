#include <stdio.h>
int main() {
    char x[100],y[100];
    int a;
    scanf("%s",&x);
    scanf("%d",&a);
    scanf("%s",&y);
    printf("Name: %s\n",x);
    printf("Age: %d\n",a);
    printf("Hobby: %s",y);
    return 0;
}