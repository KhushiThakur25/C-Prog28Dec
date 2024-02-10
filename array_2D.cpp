#include <stdio.h>
int main()
{
    int arr[3][4];
    int n;
    int mark[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         printf("Enter the value for an array..");
    //         scanf("%d", &n);
    //         arr[i][j] = n;
    //     }
    // }
    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", mark[i][j]);
        }
        printf("\n");
    }
    return 0;
}