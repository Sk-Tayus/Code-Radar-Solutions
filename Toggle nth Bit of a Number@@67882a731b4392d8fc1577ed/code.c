#include <stdio.h>
int toggleNthBit(int num, int n) {
    return num ^ (1 << n);  // XOR with 1 at nth position to toggle
}
int main() {
    int num, n, updatedNum;
    scanf("%d", &num);
    scanf("%d", &n);
    updatedNum = toggleNthBit(num, n);
    printf("%d",updatedNum);

    return 0;
}
