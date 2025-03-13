#include <stdio.h>
unsigned int setNthBit(unsigned int num, int n) {
    return num | (1 << n); // Set the nth bit
}
int main() {
    unsigned int num;
    int n;
    scanf("%u %d", &num, &n);
    printf("%u", setNthBit(num, n));
    return 0;
}
