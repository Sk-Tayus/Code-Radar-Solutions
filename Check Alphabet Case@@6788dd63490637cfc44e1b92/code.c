// Your code here...
#include <stdio.h>
#include <ctype.h>
int main() {
    char ch,k;
    scanf(" %c",&ch);
    k = tolower(ch);
    if (ch == k) {
    printf("Lowercase");
    }
    else if (ch != k) {
    printf("Not an alphabet");
    }
    else {
    printf("Uppercase");
    }
    return 0;
}