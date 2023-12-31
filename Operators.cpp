#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the value of a\n");
    scanf("%d", &a);
    printf("preIncreament is:%d\n", ++a);
    printf("postIncreament is:%d\n", a++);
    printf("%d", a);
    printf("Enter the value of b\n");
    scanf("%d", &b);
    printf("postdecreament is:%d\n", b--);
    // printf("predecreament is:%d\n", --b);
    // a = a + 10;
    a += 10;
    printf("%d", a);
    return 0;
}
// division operator - it gives the quotient
// modulus operator - it gives the remainder