#include <stdio.h>
int factorialRange(int start, int end) {
    int fact = 1;
    if((start <0 || end <0) || (start > end)) printf("Invalid range");
    else {
    for (int i = start; i<=end;i++) {
        for (int j = 1; j<=i; j++) {
            if(i==0) fact*=1;
            else fact*=j;
        }
        printf("%d\n",fact);
        fact = 1;
    }    
    }
}