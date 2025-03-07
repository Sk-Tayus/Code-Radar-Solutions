// Your code here...
#include <stdio.h>
#include <ctype.h>

int main() {
    char ch,k;
    scanf(" %c",&ch);
    if (isalpha(ch)) {
    ch = tolower(ch);
        if (ch == 'a' || ch == 'e' || ch == 'i' | ch == 'o' | ch == 'u') {
            printf("Vowel");
        }
        else {
            printf("Consonant");
        }
    }
    else if (isnum(ch)) {
        printf("Digit");
    }
    else {
        printf("Special Character");
    }
    return 0;
}
