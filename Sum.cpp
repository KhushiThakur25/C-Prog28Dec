#include <stdio.h>
int main()
{
    int n1, n2, sum;
    printf("Enter the value of n1 \n");
    scanf("%d", &n1);
    printf("Enter the value of n2 \n");
    scanf("%d", &n2);
    sum = n1 + n2;
    printf("Sum of %d and %d is %d", n1, n2, sum);
    return 0;
}