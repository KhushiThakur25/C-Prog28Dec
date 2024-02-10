#include <stdio.h>

int main()
{
    int arr[] = {2, 6, 5, 8, 9, 3};
    // arr[] = {4,8,7,10,11,5}
    int n;
    n = sizeof(arr) / sizeof(arr[0]);
    // printf("%d\n", sizeof(arr));
    // printf("%d\n", sizeof(arr[0]));
    printf("Size of an array is :%d\n", n);
    for (int i = 0; i < n; i++)
    {
        arr[i] = arr[i] + 2;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}