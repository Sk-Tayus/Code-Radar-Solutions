#include <stdio.h>
int findLowestSetBit(int num) {
    if (num == 0)
        return -1; // No set bit in 0
    int position = 0;

    while ((num & 1) == 0) { // Check if LSB is 0
        num >>= 1;           // Shift right
        position++;          // Increase position
    }
    return position;
}
int main() {
    int num, position;
    scanf("%d", &num);
    position = findLowestSetBit(num);
    printf("%d", position);

    return 0;
}
