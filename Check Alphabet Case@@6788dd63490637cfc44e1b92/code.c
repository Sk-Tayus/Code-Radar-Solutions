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
    printf("Uppercase");
    }
    else  {
        printf("Not an alphabet");
    }
    return 0;
}