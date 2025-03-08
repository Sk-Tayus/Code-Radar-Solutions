#include <stdio.h>
int clearNthBit(int num, int n) {
    return num & ~(1 << n);  // Create a mask with nth bit 0 and apply AND
}
int main() {
    int num, n, updatedNum;
    scanf("%d", &num);
    scanf("%d", &n);
    updatedNum = clearNthBit(num, n);
    printf("%d",updatedNum);
    return 0;
}
