#include <stdio.h>
int main()
{
    int arr[5];
    int n;
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the value for an array..");
        scanf("%d", &n);
        arr[i] = n;
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}