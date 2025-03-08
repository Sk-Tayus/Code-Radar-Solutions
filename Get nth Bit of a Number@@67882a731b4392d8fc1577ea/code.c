#include <stdio.h>
int getNthBit(int num, int n) {
    return (num >> n) & 1;  // Shift right and extract the nth bit
}
int main() {
    int num, n, bit;
    scanf("%d", &num);
    scanf("%d", &n);
    bit = getNthBit(num, n);
    printf("%d",bit);
    return 0;
}
