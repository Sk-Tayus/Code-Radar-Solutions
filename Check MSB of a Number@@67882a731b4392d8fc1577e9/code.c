#include <stdio.h>

int main() {
    int num, msb;
    int bits = sizeof(int) * 8;  // Total bits (usually 32)
    scanf("%d", &num);
    msb = (num >> (bits - 1)) & 1;  // Right shift till MSB and extract it
    if (msb == 1 ) {
    printf("Set");
    }
    else {
    printf("Not Set");
    }
    return 0;
}
