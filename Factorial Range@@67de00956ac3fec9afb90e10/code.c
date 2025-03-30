#include <stdio.h>
int factorialRange(int start, int end) {
    int fact = 1;
    for (int i = start; i<=end;i++) {
        for (int j = i; j<=end; j++) {
            fact*=j;
        }
        printf("%d\n",fact);
    }    
}