#include <stdio.h>
int getNthBit(int num, int n) {
    return (num >> n) & 1;  // Shift right and extract the nth bit
}
int main() {
    int num, n, bit,result;
    scanf("%d", &num);
    scanf("%d", &n);
    bit = getNthBit(num, n);
    result = bit & 1;
    printf("%d",result);
    return 0;
}
