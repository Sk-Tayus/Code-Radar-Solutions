#include <stdio.h>
int main () {
    int a;
    scanf("%d",&a);
    int arr[a];
    for (int i = 1; i<=a; i++)
    {
        scanf("%d",&arr[i]);
    }
    // Print the array elements
    printf("The array elements are: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}