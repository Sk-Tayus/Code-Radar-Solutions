#include <stdio.h>
int factorialRange(int start, int end) {
    int fact = 1;
    for (int i = start; i<=end;i++) {
        for (int j = i; j<=end; j++) {
            if(i==0) fact*=1;
            else fact*=j;
        }
        printf("%d\n",fact);
    }    
}