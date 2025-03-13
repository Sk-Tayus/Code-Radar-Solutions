#include <stdio.h>
int countLeadingZeros(unsigned int n) {
    if (n == 0) return 32; // Special case for 0
    int count = 0;
    while ((n & (1 << 31)) == 0) {
        count++;
        n <<= 1;
    }
    return count;
}
int main() {
    unsigned int num;
    scanf("%u", &num);
    printf("%d", countLeadingZeros(num));
    return 0;
}