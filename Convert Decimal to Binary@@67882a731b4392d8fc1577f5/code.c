#include <stdio.h>
void printBinary(unsigned int num) {
    int i, started = 0;
    // Iterate from the most significant bit (31) to the least significant bit (0)
    for (i = 31; i >= 0; i--) {
        if ((num >> i) & 1) // Check if the current bit is 1
            started = 1;    // Mark that we started printing
        if (started)        // Print only after the first 1 is found
            printf("%d", (num >> i) & 1);
    }
    if (!started) // If the number is 0, print a single 0
        printf("0");
    printf("\n");
}
int main() {
    unsigned int num;
    scanf("%u", &num);
    printBinary(num);
    return 0;
}
