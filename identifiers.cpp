#include <stdio.h>
int main()
{

    int ints = 6;
    long b;
    float x = 23.12;
    double y = 32653.3265;
    int n;
    // output
    printf("ints value is %d \n ", ints);
    printf("value b is %ld \n", b);
    printf("value of x is %f \n", x);
    printf("value of y is %lf \n", y);
    // input
    printf("Enter the value of n and b");
    scanf("%d %ld", &n, &b);
    printf("value b is %ld \n", b);
    return 0;
}
