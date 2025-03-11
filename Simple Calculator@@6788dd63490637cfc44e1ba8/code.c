#include <stdio.h>
int main() {
    int a,b;
    char operators;
    scanf("%d %d %c", &a ,&b , &operators);
    if (operators == '+') {
        printf("%d",a+b);
    }
    else if (operators == '-') {
        printf("%d",a-b);
    }
    else if (operators == '*') {
        printf("%d",a*b);
    }
    else if (operators == '/') {
        if (b == 0) {
            printf("error");
        }
        else {
        printf("%.0f",(float)a/b);
        }
    }
    else {
        printf("Yoyo");
    }
    return 0;
}