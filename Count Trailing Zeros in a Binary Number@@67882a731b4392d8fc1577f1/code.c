#include <stdio.h>
int countTrailingZeros(unsigned int n) {
    if (n == 0) return 32; // Special case for 0 (all bits are zero)
    int count = 0;
    while ((n & 1) == 0) { // Check if the least significant bit is 0
        count++;
        n >>= 1; // Right shift to check the next bit
    }
    return count;
}
int main() {
    unsigned int num;
    scanf("%u", &num);
    printf("%d", countTrailingZeros(num));
    return 0;
}
