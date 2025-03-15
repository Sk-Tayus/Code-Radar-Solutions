#include <stdio.h>
int main () {
    int a,even_count=0,odd_count=0;
    scanf("%d",&a);
    int arr[a];
    for (int i = 1; i<=a; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i = 1; i <= a; i++) {
        if (arr[i] % 2 == 0) even_count++;
        else odd_count++;
    }
    printf("%d ",even_count);
    printf("%d",odd_count);
    return 0;
}