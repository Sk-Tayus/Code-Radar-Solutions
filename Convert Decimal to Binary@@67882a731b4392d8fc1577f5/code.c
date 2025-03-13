#include <stdio.h>
void printBinary(unsigned int num) {
    int i;
    for (i = 31; i >= 0; i--) { // Loop through 32 bits
        printf("%d", (num >> i) & 1); // Extract each bit using right shift and AND
        if (i % 4 == 0) printf(" "); // Space for readability (optional)
    }
    printf("\n");
}
int main() {
    unsigned int num;
    scanf("%u", &num);
    printBinary(num);
    return 0;
}
