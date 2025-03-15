#include <stdio.h>
int main () {
    int a,even_count=0,odd_count=0;
    scanf("%d",&a);
    int arr[a];
    for (int i = 1; i<=a; i++)
    {
        scanf("%d",&arr[i]);
    }
    // Print the array elements
    printf("The array elements are: ");
    for (int i = 1; i <= a; i++) {
        if (arr[i] % 2 == 0) even_count++;
        if (arr[i] % 2 != 0) odd_count++;
    }
    return 0;
}